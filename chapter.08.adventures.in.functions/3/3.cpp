#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void to_upper(string &str);

int main() {
	string str;

	cout << "Enter a string (q to quit): ";
	getline(cin, str);

	while (str != "q") {
		to_upper(str);
		cout << str << endl;
		cout << "Next string (q to quit):";
		getline(cin, str);
	}

	system("Pause");
	return 0;
}


void to_upper(string &str) {
	for (int i=0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
	}
}

//Write a function that takes a reference to a stringobject as its parameter and that converts
//the contents of the string to uppercase. Use the toupper() function described in Table 6.4 of
//Chapter 6. Write a program that uses a loop which allows you to test the function with different input.
//A sample run might look like this:

//Enter a string (q to quit): go away
//GO AWAY
//Next string (q to quit): good grief!
//GOOD GRIEF!
//Next string (q to quit): q
//Bye.