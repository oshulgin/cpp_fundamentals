#include "plorg.h"

Plorg::Plorg(const char* new_name, int new_CI) {
	strcpy(name, new_name);
	CI = new_CI;
}

void Plorg::set_CI(int new_CI) {
	CI = new_CI;
}

void Plorg::show() {
	cout << "Name: " << name << endl;
	cout << "CI: " << CI << endl;
}