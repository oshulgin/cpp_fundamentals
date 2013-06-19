#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	char ch;
	ofstream out;
	out.open(argv[1]);

	while ( cin.get(ch) && ch != EOF ) {
		out << ch;
	}

	out.close();
	system("Pause");
	return 0;
}

//Write a program that copies your keyboard input (up to the simulated end-of-file)
//to a file named on the command line.