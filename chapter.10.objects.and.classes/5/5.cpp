#include "stack.h"

int main() {
	Stack st; // create an empty stack;
	char ch;
	customer c;
	double total = 0;

	cout << "Please enter A to add a customer,\n"
		<< "R to remove a customer or Q to quit." << endl;

	while(cin >> ch && toupper(ch) != 'Q'){
		while (cin.get() != '\n')
			continue;
		if(!isalpha(ch)) {
			cout << '\a';
			continue;
		}
		switch(ch) {
			case 'A':
			case 'a':
				cout << "Enter a customer's name: ";
				cin.getline(c.fullname, 35);
				cout << "Enter a payment: ";
				cin >> c.payment;
				if (st.isfull()) {
					cout << "stack already full\n";
				} else {
					st.push(c);
				}
				break;

			case 'R':
			case 'r':
				if (st.isempty()) {
					cout << "stack already empty\n";
				} else {
					st.pop(c);
					total += c.payment;
					cout << "Customer is removed\n";
				}
				break;
		}

		cout << "Please enter A to add a customer,\n"
			<< "R to remove a customer or Q to quit." << endl;
	}

	cout << "Total: " << total << endl;

	system("Pause");
	return 0;
}

//Consider the following structure declaration:
//struct customer {
//char fullname[35];
//double payment;
//};
//Write a program that adds and removes customer structures from a stack, represented
//by a Stack class declaration. Each time a customer is removed, his or her
//payment should be added to a running total, and the running total should be
//reported. Note: You should be able to use the Stack class unaltered; just change the
//typedef declaration so that Item is type customer instead of unsigned long.


