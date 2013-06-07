#include "move.h"

Move::Move(double a, double b) {
	x = a;
	y = b;
}

void Move::showmove() const {
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
}

Move Move::add(const Move & m) const {
	Move new_move;

	new_move.x = this->x + m.x;
	new_move.y = this->y + m.y;

	return new_move;
}

void Move::reset(double a, double b) {
	x = 0;
	y = 0;
}