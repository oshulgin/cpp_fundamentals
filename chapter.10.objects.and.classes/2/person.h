#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name

public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const string & ln, const char * fn = "Heyyou");

	void Show() const; // firstname lastname format
	void FormalShow() const; // lastname, firstname format
};

#endif