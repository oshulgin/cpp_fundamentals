#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

struct customer {
  char fullname[35];
  double payment;
};

typedef customer Item;

class List {
private:
	static const int SIZE = 10;
	int current;
	Item items[SIZE];
public:
	List();
	bool is_empty();
	bool is_full();
	void add(const Item &it);
	void visit(void (*pf)(const Item &));
	int size();
};

#endif