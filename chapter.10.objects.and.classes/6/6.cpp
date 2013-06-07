#include "move.h"

int main() {
	Move a(9.0, 1.2);
	Move b(12.2, 42.3);
	Move d(1, 1);
	Move c;

	cout << "a: " << endl;
	a.showmove();
	cout << "b: "<< endl;
	b.showmove();
	cout << endl;
	b.reset();
	cout << "b after reset: "<< endl;
	b.showmove();
	cout << endl;
	cout << "c after move: "<< endl;
	c = d.add(a);
	c.showmove();

	system("Pause");
	return 0;
}