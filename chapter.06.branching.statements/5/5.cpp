#include <iostream>
using namespace std;

int main() {
	int salary = 0;
	cout << "Please enter your salary: " << endl;

	while ( cin >> salary && salary >= 0 ) {
		if ( salary <= 5000 ) {
			cout << "You owe nothing" << endl;
		} else if ( salary >= 5000 && salary <= 10000 ) {
			cout << "You owe " << salary * 0.1 << " tvarps." << endl;
		} else if ( salary >= 10000 && salary <= 20000 ) {
			cout << "You owe " << salary * 0.15 << " tvarps." << endl;
		} else {
			cout << "You owe " << salary * 0.2 << " tvarps." << endl;
		}
		cout << "Please enter your salary: " << endl;
	}
	cout << "You entered invali data. Bye." << endl;

	system("pause");
	return 0;
}

//The Kingdom of Neutronia, where the unit of currency is the tvarp, has the fol-
//lowing income tax code:

//First 5,000 tvarps:0% tax
//Next 10,000 tvarps:10% tax
//Next 20,000 tvarps:15% tax
//Tvarps after 35,000:20% tax

//For example ,someone earning 38,000 tvarps would owe 5,000 ?0.00 + 10,000 ?
//0.10 + 20,000 ?0.15 + 3,000 ?0.20,or 4,600 tvarps.
//Write a program that uses a loop to solicit incomes and to report tax owed.
//The loop should terminate when the user enters a negative number or non-numeric input.