#include <iostream>
#include <string>

using namespace std;

int main() {
	int words_number = 0;
	string word;

	cout << "Enter words (to stop, type the word done): " << endl;

	do {
		cin >> word;
		words_number++;
		cin.get();
	} while ( word != "done" );

	cout << "You entered a total of " << words_number - 1 << " words." << endl;
	
	system("PAUSE");
	return 0;
}

//Write a program that matches the description of the program in Exercise 8,
//but use a string class object instead of an array. Include the string
//header file and use a relational operator to make the comparison test.