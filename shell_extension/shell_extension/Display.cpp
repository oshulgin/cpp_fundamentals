#include "Display.h"


Display::Display(string_vector &vec, LPCMINVOKECOMMANDINFO ptr) : vec_Names(vec), pici(ptr) {
	output = L"";
}

void Display::displayNames() {
	for (string_vector::iterator it = vec_Names.begin(); it != vec_Names.end(); it++ ) {
		output += *it;
		output += L"\n";
	}
	MessageBox(pici->hwnd, (LPCWSTR)output.c_str(), L"My Extension Menu", MB_ICONINFORMATION);
}
