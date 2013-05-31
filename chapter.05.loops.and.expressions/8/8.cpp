#include <iostream>
#include <cstring>

using namespace std;

const int size = 20;

int main() {
	int words_number = 0;
	char word[size];

	cout << "Enter words (to stop, type the word done): " << endl;

	do {
		cin >> word;
		words_number++;
		cin.get();
	} while ( strcmp(word, "done") );

	cout << "You entered a total of " << words_number - 1 << " words." << endl;
	
	system("PAUSE");
	return 0;
}

//Write a program that uses an array of char and a loop to read one word at a time
//until the word done is entered.The program should then report the number of
//words entered (not counting done). A sample run could look like this:
//Enter words (to stop, type the word done):
//anteater birthday category dumpster
//envy finagle geometry done for sure
//You entered a total of 7 words.
//You should include the cstring header file and use the strcmp() function to
//make the comparison test.