#include "cow.h"

int main() {
	Cow c1("Gosha", "Eating", 40);
	Cow c2;

	Cow c3(c2);

	c1.ShowCow();
	c2.ShowCow();
	c3.ShowCow();



	system("Pause");
	return 0;
}