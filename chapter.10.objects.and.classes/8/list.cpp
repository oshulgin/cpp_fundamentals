#include "list.h"


List::List() {
	current = 0;
}

bool List::is_empty() {
	return current == 0;
}

bool List::is_full() {
	return current == SIZE;
}

void List::add(const Item &item) {
	if ( !this->is_full() ) {
		items[current] = item;
		current++;
	} else {
		cout << "List is full" << endl;
	}
}

void List::visit(void (*pf)(const Item &item)) {
	for ( int i = 0; i < size(); i++ ) {
		(*pf)(items[i]);
	}
}

int List::size() {
	return current;
}