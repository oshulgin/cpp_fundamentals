#include <iostream>
using namespace std;

int main() {
	double number;
	double sum = 0;

	cout << "Plese enter numbers: " << endl;
	cin >> number;

	for ( ; number != 0; ) {
		sum += number;
		cout << "Sum: " << sum << endl;
		cin >> number;
	}

	cin.get();
	return 0;
}

//Write a program that asks the user to type in numbers. After each entry,the pro-
//gram should report the cumulative sum of the entries to date.The program should
//terminate when the user enters 0.