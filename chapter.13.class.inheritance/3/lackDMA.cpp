#include "lackDMA.h"

lackDMA::lackDMA(const char * l, const char * c, int r) : baseDMA(l,r) {
	strcpy(color, c);
}

lackDMA::lackDMA(const lackDMA & ob) : baseDMA(ob) {
	strcpy(color, ob.color);
}

lackDMA & lackDMA::operator=(const lackDMA & ob) {
	baseDMA::operator=(ob);
	strcpy(color, ob.color);
	return *this;
}

void lackDMA::view() const {
	baseDMA::view();
	cout << "Color: " << color << endl;
}