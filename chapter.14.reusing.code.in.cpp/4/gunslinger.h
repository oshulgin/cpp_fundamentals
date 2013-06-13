#ifndef GUNSLINGER_H
#define GUNSLINGER_H
#include "person.h"

class Gunslinger : public virtual Person {
protected:
	double draw_time;
	int notches_number;
public:
	Gunslinger();
	Gunslinger(const Person& person, double time, int notches_n);
	Gunslinger(const char* f_name, const char* s_name, double time, int notches_n);
	void show() const;
	double draw() const;
	int get_notches() const;
	void set_draw_time(double time);
	void set_notches(int n);
	void set();
};

#endif