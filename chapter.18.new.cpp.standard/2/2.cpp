#include "Cpmv.h"

int main() {
	cout << "Creating obj1" << endl;
	Cpmv obj1;

	cout << "\nCreating obj2" << endl;
	Cpmv obj2("One", "Two");

	cout << "\nCreating obj3" << endl;
	Cpmv obj3;

	cout << "\nCreating obj4" << endl;
	Cpmv obj4(obj1 + obj2);


	cout << "\nobj3 = obj1 + obj2" << endl;
	obj3 = obj1 + obj2;
	
	cout << "\nDisplaying obj4" << endl;
	obj4.Display();

	system("Pause");
	return 0;
}

//The operator+() function should create an object whose q code and z code mem-
//bers concatenate the corresponding members of the operands. Provide code that
//implements move semantics for the move constructor and the move assignment
//operator. Write a program that uses all the methods. For testing purposes, make the
//various methods verbose so that you can see when they are used.