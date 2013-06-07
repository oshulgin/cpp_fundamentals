#include "golf.h"
#include <iostream>
#include <cstring>

using namespace std;

Golf::Golf(const char* fn, int h) {
	strcpy(fullname, fn);
	handicap = h;
}

Golf::Golf() {}

void Golf::setgolf() {
	cout << "Please enter a name and a handicap: ";
	Golf tmp;
	cin >> tmp.fullname;
	cin.get();
	cin >> tmp.handicap;
	*this = tmp;
}

void Golf::set_handicap(int hc) {
	handicap = hc;
}

void Golf::showgolf() {
	cout << "Name: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;
}