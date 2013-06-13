#ifndef POKER_PLAYER_H
#define POKER_PLAYER_H
#include "person.h"

class PokerPlayer : public virtual Person {
public:
	PokerPlayer();
	PokerPlayer(const char* f_name, const char* s_name);
	void show() const;

	int draw() const;

	void set();
};

#endif