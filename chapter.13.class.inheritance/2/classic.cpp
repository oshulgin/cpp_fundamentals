#include "classic.h"

Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s1, s2, n, x) {
	primary_work = new char[strlen(s3) + 1];
	strcpy(primary_work, s3);
}

Classic::Classic(const Classic & d) : Cd(d) {
	primary_work = new char[strlen(d.primary_work) + 1];
	strcpy(primary_work, d.primary_work);
}

Classic::Classic() : Cd() {
	primary_work = new char[strlen("No primary work") + 1];
	strcpy(primary_work, "No primary work");
}

Classic::~Classic() {
	delete [] primary_work;
}

void Classic::Report() const {
	Cd::Report();
	cout << "Primary work: " <<  primary_work << endl;
}

Classic & Classic::operator=(const Classic & d) {
	Cd::operator=(d);
	delete [] primary_work;
	primary_work = new char[strlen(d.primary_work) + 1];
	strcpy(primary_work, d.primary_work);
	return *this;
}