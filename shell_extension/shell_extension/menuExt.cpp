#include "menuExt.h"
#include <strsafe.h>
#include <Shlwapi.h>
#pragma comment(lib, "shlwapi.lib")

extern HINSTANCE g_hInst;
extern long g_cDllRef;

#define IDM_DISPLAY             0  // The command's identifier offset

menuExt::menuExt(void) : m_cRef(1),
    m_pwszVerbCanonicalName(L"CppDisplayFileName"),
    m_pwszVerbHelpText(L"Display File Name (C++)")
{
    InterlockedIncrement(&g_cDllRef);
}

menuExt::~menuExt(void)
{
    InterlockedDecrement(&g_cDllRef);
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP menuExt::QueryInterface(REFIID riid, void **ppv)
{
    static const QITAB qit[] = 
    {
        QITABENT(menuExt, IContextMenu),
        QITABENT(menuExt, IShellExtInit), 
        { 0 },
    };
    return QISearch(this, qit, riid, ppv);
}

// Increase the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) menuExt::AddRef()
{
    return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) menuExt::Release()
{
    ULONG cRef = InterlockedDecrement(&m_cRef);
    if (0 == cRef)
    {
        delete this;
    }

    return cRef;
}

#pragma endregion


#pragma region IShellExtInits

IFACEMETHODIMP menuExt::Initialize(LPCITEMIDLIST pidlFolder, LPDATAOBJECT pDataObj, HKEY hKeyProgID) {
	bool bChangedDir = false;
	
    if (NULL == pDataObj)
    {
        return E_INVALIDARG;
    }

    HRESULT hr = E_FAIL;
    FORMATETC fe = { CF_HDROP, NULL, DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
    STGMEDIUM stm;
	
    // The pDataObj pointer contains the objects being acted upon. In this 
    // example, we get an HDROP handle for enumerating the selected files and 
    // folders.

    if (SUCCEEDED(pDataObj->GetData(&fe, &stm)))
    {
        // Get an HDROP handle.
        HDROP hDrop = static_cast<HDROP>(GlobalLock(stm.hGlobal));
        if (hDrop != NULL)

        {
            // Determine how many files are involved in this operation. 
            UINT nFiles = DragQueryFile(hDrop, 0xFFFFFFFF, NULL, 0);

			for ( UINT i = 0; i < nFiles; i++ ) {

				// Get the next filename.
				DragQueryFile(hDrop, i, m_szSelectedFile, ARRAYSIZE(m_szSelectedFile));
				m_vecFiles.push_back( m_szSelectedFile );
			}

			hr = S_OK;
        }

		GlobalUnlock(stm.hGlobal);
        ReleaseStgMedium(&stm);
    }

    return hr;
}

#pragma endregion


#pragma region IContextMenu

IFACEMETHODIMP menuExt::QueryContextMenu(HMENU hMenu, UINT indexMenu, UINT idCmdFirst, UINT idCmdLast, UINT uFlags) {
    // If uFlags include CMF_DEFAULTONLY then we should not do anything.
    if (CMF_DEFAULTONLY & uFlags)
    {
        return MAKE_HRESULT(SEVERITY_SUCCESS, 0, USHORT(0));
    }

	InsertMenu ( hMenu, indexMenu, MF_BYPOSITION, idCmdFirst, L"Avid the Best" );

    return MAKE_HRESULT(SEVERITY_SUCCESS, 0, USHORT(IDM_DISPLAY + 1));
}


IFACEMETHODIMP menuExt::InvokeCommand(LPCMINVOKECOMMANDINFO pici)
{
    if (LOWORD(pici->lpVerb) == IDM_DISPLAY)
    {
		Display showNames(m_vecFiles, pici);
		showNames.displayNames();
    }
    else
    {
        return E_FAIL;
    }

    return S_OK;
}


//   FUNCTION: CFileContextMenuExt::GetCommandString
IFACEMETHODIMP menuExt::GetCommandString(UINT_PTR idCommand, 
    UINT uFlags, UINT *pwReserved, LPSTR pszName, UINT cchMax)
{
    HRESULT hr = E_INVALIDARG;

    if (idCommand == IDM_DISPLAY)
    {
        switch (uFlags)
        {
        case GCS_HELPTEXTW:
            // Only useful for pre-Vista versions of Windows that have a 
            // Status bar.
            hr = StringCchCopy(reinterpret_cast<PWSTR>(pszName), cchMax, 
                m_pwszVerbHelpText);
            break;

        case GCS_VERBW:
            // GCS_VERBW is an optional feature that enables a caller to 
            // discover the canonical name for the verb passed in through 
            // idCommand.
            hr = StringCchCopy(reinterpret_cast<PWSTR>(pszName), cchMax, 
                m_pwszVerbCanonicalName);
            break;

        default:
            hr = S_OK;
        }
    }

    // If the command (idCommand) is not supported by this context menu 
    // extension handler, return E_INVALIDARG.

    return hr;
}

#pragma endregion