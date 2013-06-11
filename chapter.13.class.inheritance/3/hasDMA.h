#ifndef HASDMA_H
#define HASDMA_H

#include "baseDMA.h"

class hasDMA : public baseDMA {
private:
	char * style;
public:
	hasDMA(const char * l = "null", const char * st = "no style", int r = 0);
	hasDMA(const hasDMA & ob);
	~hasDMA();
	hasDMA & operator=(const hasDMA & ob);
	void view() const;
};

#endif