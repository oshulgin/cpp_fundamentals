#ifndef FILE_INFO_H
#define FILE_INFO_H

#include <vector>
#include <string>
#include <map>
#include "menuExt.h"

typedef std::vector<std::wstring> string_vector;
typedef std::map<std::wstring, std::wstring> string_map;

class FileInfo {
public:
	std::wstring output;
	string_vector vec_Names;
	string_map info_map;
	string_map checksum_map;
	
	FileInfo(string_vector &vec);
	std::wstring get_file_size(std::wstring &filepath);
	std::wstring get_file_creation_date(std::wstring &filepath);
	std::wstring CRC32_function(unsigned char *buf, unsigned long len);
	void calculate_checksum();
	void get_full_info(); 
	void display_info();

};
#endif