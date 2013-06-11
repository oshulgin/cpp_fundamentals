#include "port.h"
#include "vintagePort.h"

int main() {
	Port p1;
	VintagePort p2;
	Port p3("Podol", "ruby", 20);
	VintagePort p4("Odessa", 15, "Vasya84", 2002);

	//p1.Show();
	//cout << endl;
	//p2.Show();
	//cout << endl;
	//p3.Show();
	//cout << endl;
	//p4.Show();
	//cout << endl;

	p1 = p4;
	p2 = p4;

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;
	cout << p4 << endl;

	system("Pause");
	return 0;
}

//You get the job of completing the VintagePortwork.
//a. Your first task is to re-create the Portmethod definitions because the former
//Portmaster immolated his upon being relieved.
//b. Your second task is to explain why certain methods are redefined and others
//are not.
//c. Your third task is to explain why operator=()andoperator<<()are not
//virtual.
//d. Yourfourth task is to provide definitions for the VintagePort methods.