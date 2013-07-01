#ifndef DISPLAY_NAMES_H
#define DISPLAY_NAMES_H

#include <vector>
#include <string>
#include "menuExt.h"

typedef std::vector<std::wstring> string_vector;

class Display {
public:
	std::wstring output;
	string_vector vec_Names;
	LPCMINVOKECOMMANDINFO pici;
	Display(string_vector &vec, LPCMINVOKECOMMANDINFO pici);

	void displayNames();

};
#endif