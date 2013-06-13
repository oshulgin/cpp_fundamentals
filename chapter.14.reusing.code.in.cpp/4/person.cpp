#include "person.h"

Person::Person(const char* f_name, const char* s_name) : f_name(f_name), s_name(s_name) {}

void Person::show() const {
	cout << "Name: " << f_name << endl;
	cout << "Second name: " << s_name << endl;
}

const string& Person::get_f_name() const { return f_name; }

const string& Person::get_s_name() const { return s_name; }

void Person::set_f_name(const char* f_n) { f_name = f_n; }

void Person::set_s_name(const char* s_n) { s_name = s_n; }

void Person::set() {
	cout << "Please enter your First name: ";
	cin >> f_name;
	cout << "Please enter your Second name: ";
	cin >> s_name;
}