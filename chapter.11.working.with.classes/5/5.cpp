#include <iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt & st, int n);

int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

	cout << incognito << endl;
	cout << wolfe << endl;
	cout << taft << endl;

	cout << wolfe + taft << endl;
	cout << taft * 3 << endl;

	system("Pause");
    return 0;
}

