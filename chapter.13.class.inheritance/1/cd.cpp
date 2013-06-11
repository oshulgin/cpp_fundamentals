#include "cd.h"

Cd::Cd(char * s1, char * s2, int n, double x) {
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d) {
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	strcpy(performers, "No name");
	strcpy(label, "No name");
	selections = 0;
	playtime = 0;
}

Cd::~Cd() {}

void Cd::Report() const {
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d) {
	if ( this == &d ) { return *this; }
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}