#ifndef BAD_DUDE_H
#define BAD_DUDE_H
#include "PokerPlayer.h"
#include "gunslinger.h"

class BadDude : public PokerPlayer, public Gunslinger {
public:
	BadDude();
	BadDude(const Person& person, double time, int notches_n);
	BadDude(const char* f_name, const char* s_name, double time, int notches_n);
	void show() const;

	double gdraw() const;
	int cdraw() const;

	void set();
};

#endif