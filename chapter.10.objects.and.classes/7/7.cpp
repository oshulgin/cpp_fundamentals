#include "plorg.h"

int main() {
	Plorg a;
	Plorg b("Cthulhu", 100500);
	Plorg c("Tro", 42);

	a.show();
	b.show();
	c.show();

	a.set_CI(20);
	a.show();

	system("Pause");
	return 0;
}