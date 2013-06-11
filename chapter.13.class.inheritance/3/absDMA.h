#ifndef ABSDMA_H
#define ABSDMA_H

using namespace std;
#include <iostream>

class absDMA {
protected:
	char *label;
	int rating;

public:
	absDMA(const char * l = "null", int r = 0);
	absDMA(const absDMA & ob);
	virtual ~absDMA();
	absDMA & operator=(const absDMA & ob);
	virtual void view() const = 0;
};

#endif