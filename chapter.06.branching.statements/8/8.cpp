#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	ofstream output;
	ifstream input;

	output.open("output.txt");
	input.open("input.txt");

	if ( !input.is_open() ) {
		exit(EXIT_FAILURE);
	}

	char ch;
	int count =0;

	do {
		input.get(ch);
		count++;
	} while ( input.good() );

	output << "Number of characters in file: " << count - 1 << endl;
	output.close();
	input.close();
	system("pause");
	return 0;
}

//Write a program that opens a text file,reads it character-by-character to the end of
//the file,and reports the number of characters in the file.