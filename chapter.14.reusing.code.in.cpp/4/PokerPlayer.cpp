#include "PokerPlayer.h"

PokerPlayer::PokerPlayer() : Person() {}

PokerPlayer::PokerPlayer(const char* f_name, const char* s_name) : Person(f_name, s_name) {}

void PokerPlayer::show() const {
	Person::show(); 
	cout << "Random card: " << draw() << endl;
}

int PokerPlayer::draw() const {
	return rand() % 52 + 1;
}

void PokerPlayer::set() { 
	Person::set();
}