#include "person.h"

int main() {
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults

	two.Show();
	two.FormalShow();

	three.Show();
	three.FormalShow();

	system("Pause");
	return 0;
}