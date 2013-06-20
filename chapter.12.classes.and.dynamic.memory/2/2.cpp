#include <iostream>
using namespace std;

#include "string2.h"
int main()
{
	String s1(" and I am a C++ student.");
	String s2 = "Please enter your name: ";
	String s3;

	cout << s2; // overloaded << operator
	cin >> s3; // overloaded >> operator

	s2 = "My name is " + s3; // overloaded =, + operators
	cout << s2 << ".\n";
	s2 = s2 + s1;

	cout << s2 << endl;

	s2.stringup(); // converts string to uppercase

	cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
		<< " 'A' characters in it.\n";
	s1 = "red"; // String(const char *),

	// then String & operator=(const String&)
	String rgb[3]= { String(s1), String("green"), String("blue")};
	cout << "Enter the name of a primary color for mixing light: ";

	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow(); // converts string to lowercase
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i]) // overloaded == operator
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Try again!\n";
	}


	cout << "Bye\n";

	system("Pause");
	return 0;
}

//Enhance the String class declaration (that is, upgrade string1.h to string2.h) by
//doing the following:
//a. Overload the +operator to allow you to join two strings into one.
//b. Provide a stringlow()member function that converts all alphabetic charac-
//ters in a string to lowercase.(Don’t forget the cctypefamily of character
//functions.)
//c. Provide a stringup()member function that converts all alphabetic charac-
//ters in a string to uppercase.
//d. Provide a member function that takes a charargument and returns the num-
//ber of times the character appears in the string.