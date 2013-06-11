#ifndef BASEDMA_H
#define BASEDMA_H

#include "absDMA.h"

class baseDMA : public absDMA {
public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & ob);
	baseDMA & operator=(const baseDMA & ob);
	void view() const;
};

#endif