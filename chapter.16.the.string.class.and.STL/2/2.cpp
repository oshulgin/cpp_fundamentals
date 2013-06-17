#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPoly(string& word);

int main() {
	cout << "Enter a string: ";
	string str;
	getline(cin,str);

	for (int i = 0; i < str.size(); i++) {
		str[i] = tolower(str[i]);
		if ( !isalpha(str[i]) ) {
			str.erase(str.begin() + i);
		}
	}

	cout << str << endl;

	if ( isPoly(str) ) {
		cout << str << " is a polyndrome." << endl;
	} else {
		cout << str << " not a polyndrome." << endl;
	}

	system("Pause");
	return 0;
}

bool isPoly(string& word) {
	int last = word.size() - 1;
	for (int i = 0; i < last; i++, last-- ) {
		if (word[i] != word[last]) {
			return false;
		}
	}
	return true;
}
//Do the same problem as given in Programming Exercise 1 but do worry about
//complications such as capitalization,spaces,and punctuation.That is,“Madam,I’m
//Adam”should test as a palindrome.For example,the testing function could reduce
//the string to “madamimadam”and then test whether the reverse is the same.Don’t
//forget the useful cctypelibrary.You might find an STL function or two useful
//although not necessary.