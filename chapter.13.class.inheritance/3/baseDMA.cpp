#include "baseDMA.h"

baseDMA::baseDMA(const char * l, int r) : absDMA(l,r) { }

baseDMA::baseDMA(const baseDMA & ob) : absDMA(ob) { }

baseDMA & baseDMA::operator=(const baseDMA & ob) {
	absDMA::operator=(ob);
	return *this;
}

void baseDMA::view() const {
	cout << "Label: " << label << endl;
	cout << "Rating: " << rating << endl;
}
