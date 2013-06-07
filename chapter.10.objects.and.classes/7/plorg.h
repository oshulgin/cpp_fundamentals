#ifndef PLORG_H
#define PLORG_H

#include <iostream>
using namespace std;

class Plorg {
private:
	char name[20];
	int CI;

public:
	Plorg(const char* new_name = "Plorga", int new_CI = 50);
	void set_CI(int new_CI);
	void show();

};

#endif