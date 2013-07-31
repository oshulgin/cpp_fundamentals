#ifndef MENU_EXT_H
#define MENU_EXT_H

#include <windows.h>
#include <shlobj.h>     // For IShellExtInit and IContextMenu
#include <vector>
#include <string>
#include "fileInfo.h"

typedef std::vector<std::wstring> string_vector;

class menuExt : public IShellExtInit, public IContextMenu
{
public:
    // IUnknown
    IFACEMETHODIMP QueryInterface(REFIID riid, void **ppv);
    IFACEMETHODIMP_(ULONG) AddRef();
    IFACEMETHODIMP_(ULONG) Release();

    // IShellExtInit
    IFACEMETHODIMP Initialize(LPCITEMIDLIST pidlFolder, LPDATAOBJECT pDataObj, HKEY hKeyProgID);

    // IContextMenu
    IFACEMETHODIMP QueryContextMenu(HMENU hMenu, UINT indexMenu, UINT idCmdFirst, UINT idCmdLast, UINT uFlags);
    IFACEMETHODIMP InvokeCommand(LPCMINVOKECOMMANDINFO pici);
    IFACEMETHODIMP GetCommandString(UINT_PTR idCommand, UINT uFlags, UINT *pwReserved, LPSTR pszName, UINT cchMax);
	
    menuExt(void);

	string_vector m_vecFiles;

protected:
    ~menuExt(void);
	

private:
    // Reference count of component.
    long m_cRef;

    // The name of the selected file.
    wchar_t m_szSelectedFile[MAX_PATH];
	
    PCWSTR m_pwszVerbCanonicalName;
    PCWSTR m_pwszVerbHelpText;
};

#endif