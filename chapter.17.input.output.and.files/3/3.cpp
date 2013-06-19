#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream source;
	ofstream target;
	source.open(argv[1]);
	target.open(argv[2]);
	char ch;

	if ( !source.is_open() ) { 
		cerr << "Could not open " << argv[1] << endl; 
	} 
	
	while (source.get(ch) && ch != EOF) {
		target << ch;
	}
	source.close();
	target.close();

	system("Pause");
	return 0;
}

//Write a program that copies one file to another.Have the program take the file-
//names from the command line.Have the program report if it cannot open a file.