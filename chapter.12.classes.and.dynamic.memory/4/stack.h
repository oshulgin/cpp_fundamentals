#ifndef STACK_H_
#define STACK_H_
#include<iostream>
using namespace std;


typedef unsigned long Item;

class Stack
{
private:
	enum {MAX = 10}; // constant specific to class
	Item * pitems; // holds stack items
	int size; // number of elements in stack
	int top; // index for top stack item

public:
	Stack(int n = MAX); // creates stack with n elements
	Stack(const Stack & st);
	~Stack();
	bool isempty() const;
	bool isfull() const;

	bool push(const Item & item); // add item to stack
	bool pop(Item& item); // pop top into item

	Stack & operator=(const Stack & st);

	void showItems() const;
};



#endif
