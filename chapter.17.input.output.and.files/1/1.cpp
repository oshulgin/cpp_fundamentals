#include <iostream>

using namespace std;

int main() {
	int count = 0;
	char ch;

	cout << "Enter a string" << endl;
	while ( cin.get() ) {
		count++;
		if ( cin.peek() == '$') {
			break;
		}
	}

	cout << count << endl;
	system("Pause");
	return 0;
}


//Write a program that counts the number of characters up to the first $ in input and
//that leaves the $ in the input stream.