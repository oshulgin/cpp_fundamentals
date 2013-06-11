#include "absDMA.h"

absDMA::absDMA(const char * l, int r) {
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	rating = r;
}

absDMA::absDMA(const absDMA & ob) {
	label = new char[strlen(ob.label) + 1];
	strcpy(label, ob.label);
	rating = ob.rating;
}

absDMA::~absDMA() {
	delete [] label;
}

absDMA & absDMA::operator=(const absDMA & ob) {
	if ( this == &ob ) { return *this; }
	delete [] label;
	label = new char[strlen(ob.label) + 1];
	strcpy(label, ob.label);
	rating = ob.rating;
	return *this;
}

//void absDMA::view() const {}