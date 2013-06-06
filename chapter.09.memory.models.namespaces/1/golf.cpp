#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

void setgolf(golf & g, const char * name, int hc) {
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g) {
	cout << "Please enter a name: ";
	cin.getline(g.fullname, Len);
	if ( strlen(g.fullname) == 0 ) {
		return 1;
	}
	return 0;
}

void handicap(golf & g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf & g) {
	cout << "Name: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}