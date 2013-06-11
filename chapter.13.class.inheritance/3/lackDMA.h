#ifndef LACKDMA_H
#define LACKDMA_H

#include "baseDMA.h"

class lackDMA : public baseDMA {
private:
	char color[40];
public:
	lackDMA(const char * l = "null", const char * c = "green", int r = 0);
	lackDMA(const lackDMA & ob);
	lackDMA & operator=(const lackDMA & ob);
	void view() const;
};

#endif