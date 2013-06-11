#include "hasDMA.h"

hasDMA::hasDMA(const char * l, const char * st, int r) : baseDMA(l,r) {
	style = new char[strlen(st) + 1];
	strcpy(style, st);
}

hasDMA::hasDMA(const hasDMA & ob) : baseDMA(ob) {
	style = new char[strlen(ob.style) + 1];
	strcpy(style, ob.style);
}

hasDMA & hasDMA::operator=(const hasDMA & ob) {
	baseDMA::operator=(ob);
	delete [] style;
	style = new char[strlen(ob.style) + 1];
	strcpy(style, ob.style);
	return *this;
}

void hasDMA::view() const {
	baseDMA::view();
	cout << "Style: " << style << endl;
}

hasDMA::~hasDMA() {
	delete [] style;
}