#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	cout << "Enter words (q to quit): " << endl;
	string word;
	int number_of_vowels = 0;
	int number_of_consonants = 0;
	int number_of_other = 0;

	do {
		cin >> word;
		cin.get();
		if ( isalpha(word[0]) ) {
			if ( word[0] == 'a' || word[0] == 'e' || word[0] == 'o' || word[0] == 'u' || word[0] == 'i' || word[0] == 'y' ) {
				number_of_vowels++;
			} else {
				number_of_consonants++;
			}
		} else {
			number_of_other++;
		}

	} while ( word != "q" );
	
	cout << number_of_vowels << " words beginning with vowels." << endl;
	cout << number_of_consonants << " words beginning with consonants." << endl;
	cout << number_of_other << " other." << endl;

	system("PAUSE");
	return 0;
}

//Write a program that reads input a word at a time until a lone q is entered. The
//program should then report the number of words that began with vowels,the num-
//ber that began with consonants,and the number that fit neither of those categories.
//One approach is to use isalpha()to discriminate between words beginning with
//letters and those that don’t and then use an if or switch statement to further iden-
//tify those passing the isalpha()test that begin with vowels. A sample run might
//look like this:
//Enter words (q to quit):
//The 12 awesome oxen ambled
//quietly across 15 meters of lawn. q
//5 words beginning with vowels
//4 words beginning with consonants
//2 others