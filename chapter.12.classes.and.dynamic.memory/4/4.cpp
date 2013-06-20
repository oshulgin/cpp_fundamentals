// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype>  // or ctype.h
#include "stack.h"
int main()
{
	Stack st1;
	Stack st2(st1);
	Stack st3;

	cout << st1.isempty() << endl;
	
	st1.push(12123124);
	st1.push(12222222);
	st1.push(33333333);
	cout << "St1: " << endl;
	st1.showItems();

	st2 = Stack(st1);
	cout << "St2: " << endl;
	st2.showItems();

	st1 = Stack();
	cout << "St1 empty:" << endl;
	st1.showItems();

	cout << endl;

	cout << "St2: " << endl;
	st2.showItems();

	st3 = st2;
	cout << "St3: " << endl;
	st3.showItems();

	system("Pause");
    return 0; 
}


//As the private members suggest,this class uses a dynamically allocated array to hold
//the stack items.Rewrite the methods to fit this new representation and write a
//program that demonstrates all the methods,including the copy constructor and
//assignment operator.