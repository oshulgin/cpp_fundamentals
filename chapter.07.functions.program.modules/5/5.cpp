#include <iostream>

using namespace std;

long factorial(int namber);

int main() {
	cout << "Please enter a number, ";
	cout << "to terminate enter -1" << endl;
	int number;
	cin >> number;
	while ( number != -1 ) {
		cout << "!" << number << " is " << factorial(number) << endl;
		cin >> number;
	}

	system("Pause");
	return 0;
}

long factorial(int number) {
	if ( number <= 1 ) {
		return 1; 
	}

	return number * factorial(number - 1);
}

//Define a recursive function that takes an integer argument and returns the factorial
//of that argument.Recall that 3 factorial,written 3!, equals 3 ?2!, and so on,with 0!
//defined as 1.In general,if n is greater than zero, n! = n * (n - 1)!.Test your function
//in a program that uses a loop to allow the user to enter various values for which the
//program reports the factorial.

