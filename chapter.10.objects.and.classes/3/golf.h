#ifndef GOLF_H
#define GOLF_H

#include <iostream>
#include <string>

using namespace std;

class Golf {
private:
	char fullname[40];
	int handicap;

public:
	Golf::Golf();
	Golf(const char* fn, int h);
	void setgolf();
	void set_handicap(int hc = 0);
	void showgolf();
};


#endif