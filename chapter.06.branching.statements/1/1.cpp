#include <iostream>
#include <cctype>

using namespace std;

int main() {
	char ch;

	cout << "Please enter a string, to terminate input enter #" << endl;

	cin.get(ch);
	while ( ch != '#' ) {
		if ( !isdigit(ch) ) {
			if ( islower(ch) ) {
				toupper(ch);
				ch = toupper(ch);
			} else {
				tolower(ch);
				ch = tolower(ch);
			}
			cout << ch;
		}
		cin.get(ch);
	}

	return 0;
}

//Write a program that reads keyboard input to the @ symbol and that echoes the
//input except for digits, converting each uppercase character to lowercase, and vice
//versa.(Don’t forget the cctype family.)