#include <iostream>
#include <string>

using namespace std;

bool isPoly(string& word);

int main() {
	cout << "Enter a word: ";
	string str;
	getline(cin,str);

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
//A palindromeis a string that is the same backward as it is forward.For example,“tot”
//and “otto”are rather short palindromes.Write a program that lets a user enter a
//string and that passes to a boolfunction a reference to the string.The function
//should return trueif the string is a palindrome and falseotherwise. At this point,
//don’t worry about complications such as capitalization,spaces,and punctuation.
//That is,this simple version should reject “Otto”and “Madam,I’m Adam.”Feel free
//to scan the list of string methods in Appendix Ffor methods to simplify the task.