#include<iostream>
using namespace std;

int main() {
	const double miles_coef = 62.14;
	const double gallon_coef = 3.875;
	double gasoline_consumption_european;
	int gasoline_consumption_usa;

	cout << "Please enter your fuel consumption in European style (liters per 100 kilometers): ";
	cin >> gasoline_consumption_european;

	gasoline_consumption_usa = miles_coef * gallon_coef / gasoline_consumption_european;
	cout << gasoline_consumption_european << " liters per 100 kilometers is about " << gasoline_consumption_usa << " mpg.";

	cin.get();
	cin.get();
	return 0;
}