#include <iostream>

using namespace std;

const int limit = 10;

int main() {
	double donations[limit];
	double sum = 0;
	int counter = 0;

	cout << "Please enter 10 donation values:" << endl;

	for ( int i = 0; i < limit; i++ ) {
		if (cin >> donations[i] ) {
			sum += donations[i];
			counter++;
		} else {
			cout << "You have entered non-numeric data" << endl;
			break;
		}
	}
	
	cout << "Number of donations: " << counter << endl;
	cout << "Average: " << sum / counter << endl;

	system("pause");
	return 0;
}

//Write a program that reads up to 10 donation values into an array of double. (Or, if
//you prefer,use an array template object.) The program should terminate input on
//non-numeric input. It should report the average of the numbers and also report
//how many numbers in the array are larger than the average.