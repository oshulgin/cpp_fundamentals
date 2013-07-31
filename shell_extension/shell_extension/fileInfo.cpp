#include "fileInfo.h"
#include <algorithm>  
#include <sstream>
#include <fstream>

FileInfo::FileInfo(string_vector &vec) : vec_Names(vec) {
	output = L"";
}

std::wstring FileInfo::get_file_size(std::wstring &filepath)
{
	DWORD lpFileSizeHigh = 0;
	HANDLE hFile = CreateFile(filepath.c_str(), 0, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	if (hFile > 0)
	{
		lpFileSizeHigh = GetFileSize(hFile, NULL) ;
	}

	CloseHandle(hFile);

	std::wstringstream streamFileSize;
	streamFileSize << lpFileSizeHigh;

	return streamFileSize.str();
}

std::wstring FileInfo::get_file_creation_date(std::wstring &filepath)
{
	std::wstringstream streamDateCreation;
	WIN32_FILE_ATTRIBUTE_DATA wfad;
	SYSTEMTIME st;

	GetFileAttributesEx(filepath.c_str(), GetFileExInfoStandard, &wfad);
	FileTimeToSystemTime(&wfad.ftCreationTime, &st);

	streamDateCreation << st.wMonth << '/' << st.wDay << '/' << st.wYear;

	return streamDateCreation.str();
}

std::wstring FileInfo::CRC32_function(unsigned char *buf, unsigned long len)
{
	unsigned long crc_table[256];
	unsigned long crc;
	for (int i = 0; i < 256; i++)
	{
		crc = i;
		for (int j = 0; j < 8; j++)
			crc = crc & 1 ? (crc >> 1) ^ 0xEDB88320UL : crc >> 1;
		crc_table[i] = crc;
	};
	crc = 0xFFFFFFFFUL;
	while (len--)
		crc = crc_table[(crc ^ *buf++) & 0xFF] ^ (crc >> 8);

	std::wstringstream streamCRC32;
	streamCRC32 << std::hex << (crc ^ 0xFFFFFFFFUL);

	return streamCRC32.str();
}

void FileInfo::calculate_checksum() {
	for (string_map::iterator it = checksum_map.begin(); it != checksum_map.end(); it++) {
		char buf[4096*64];
		std::ifstream f (it->first, std::ios::binary);
		f.read(buf, 4096*64);
		std::wstring checksum_info = L"";
		checksum_info += L"\n	checksum: ";
		checksum_info += CRC32_function((unsigned char*)buf, f.gcount());
		checksum_map[it->first] = checksum_info;
	}
}

void FileInfo::get_full_info() {
	std::wstring tmp;

	for (string_vector::iterator it = vec_Names.begin(); it != vec_Names.end(); it++ ) {
		tmp = L"";

		// Getting file names from paths
		for (size_t i = (*it).length() - 1, pos = 0; (*it)[i] != '\\'; i--, pos++) {
			tmp += (*it)[i];
		}	
		for (size_t i = 0, lenght = tmp.length() - 1; i < lenght; i++, lenght--) {
			wchar_t temp_char = tmp[i];
			tmp[i] = tmp[lenght];
			tmp[lenght] = temp_char;
		}
		
		checksum_map[tmp] = L""; // adding keys to map of checksums. Values will be added in FileInfo::calculate_checksum().

		// gathering and adding file info to map. Key is file name, value is info.
		std::wstring info;
		std::wstring size_str = get_file_size(*it);
		std::wstring date_str = get_file_creation_date(*it);
		info += L":\n	size: ";
		info += size_str;
		info += L" bytes\n";
		info += L"	date of creation: ";
		info += date_str;
		info_map[tmp] = info;
	}
}


void FileInfo::display_info() {
	get_full_info();
	calculate_checksum();

	for(string_map::iterator it = info_map.begin(), it_chs = checksum_map.begin(); it != info_map.end(); it++, it_chs++) {
		output += it->first;
		output += it->second;
		output += it_chs->second; // adding checksum to output string
		output += L"\n";
	}

	MessageBox(NULL, (LPCWSTR)output.c_str(), L"My Extension Menu", MB_ICONINFORMATION);
}
