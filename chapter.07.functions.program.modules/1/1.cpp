#include <iostream>
using namespace std;

double harmonic(double a, double b);

int main() {
	cout << "Please enter two numbers: ";
	double a, b;
	cin >> a >> b;
	while ( a != 0 && b != 0 ) {
		cout << harmonic(a, b) << endl;
		cout << "Please enter another pair: ";
		cin >> a >> b;
	}

	system("Pause");
	return 0;
}

double harmonic(double a, double b) {
	return 2.0 * a * b / (a + b);
}

//Write a program that repeatedly asks the user to enter pairs of numbers until at
//least one of the pair is 0.For each pair, the program should use a function to calculate the harmonic mean of the numbers. The function should return the answer to
//main(),which should report the result. The harmonic mean of the numbers is the
//inverse of the average of the inverses and can be calculated as follows:
//harmonic mean = 2.0 * x * y / (x + y)