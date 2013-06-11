#include "classic.h"

Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s1, s2, n, x) {
	strcpy(primary_work, s3);
}

Classic::Classic(const Classic & d) : Cd(d) {
	strcpy(primary_work, d.primary_work);
}

Classic::Classic() : Cd() {
	strcpy(primary_work, "No primary work");
}

void Classic::Report() const {
	Cd::Report();
	cout << "Primary work: " << primary_work << endl;
}

Classic & Classic::operator=(const Classic & d) {
	if ( this == &d ) { return *this; }
	Cd::operator=(d);
	strcpy(primary_work, d.primary_work);
	return *this;
}