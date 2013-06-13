#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;

class Person {
protected:
	string f_name;
	string s_name;
public:
	Person(const char* f_name = "none", const char* s_name = "none");
	virtual void show() const;
	const string& get_f_name() const;
	const string& get_s_name() const;
	void set_f_name(const char* f_n);
	void set_s_name(const char* s_n);
	virtual void set();
};

#endif