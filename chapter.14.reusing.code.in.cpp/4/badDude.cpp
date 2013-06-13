#include "badDude.h"

BadDude::BadDude() : Person() {
	draw_time = 0;
	notches_number = 0;
}

BadDude::BadDude(const Person& person, double time, int notches_n) : Gunslinger(person, time, notches_n) {}

BadDude::BadDude(const char* f_name, const char* s_name, double time, int notches_n) : Gunslinger(f_name, s_name, time, notches_n) {}

void BadDude::show() const {
	Gunslinger::show();
	cout << "Card: " << cdraw() << endl;
}

double BadDude::gdraw() const { return Gunslinger::draw(); }

int BadDude::cdraw() const { 
	return PokerPlayer::draw();
}

void BadDude::set() {
	Gunslinger::set();
}