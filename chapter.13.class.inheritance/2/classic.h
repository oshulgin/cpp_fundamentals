#ifndef CLASSIC_H
#define CLASSIC_H

#include "cd.h"
#include <iostream>
using namespace std;

class Classic: public Cd {
private:
	char *primary_work;
public:
	Classic(char * s1, char * s2, char * s3, int n, double x);
	Classic(const Classic & d);
	Classic();
	~Classic();
	void Report() const;
	Classic & operator=(const Classic & d);
};

#endif