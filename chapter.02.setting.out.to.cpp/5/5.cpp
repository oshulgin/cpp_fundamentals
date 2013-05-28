#include <iostream>
using namespace std;

float celsium_to_fahrenheit(float celsium);

int main() {
	float celsium;

	cout << "Please enter a Celsius value: ";
	cin >> celsium;
	cout << celsium << " degrees Celsius is " << celsium_to_fahrenheit(celsium) << " degrees Fahrenheit" << endl; 

	cin.get();
	cin.get();

	return 0;
}

float celsium_to_fahrenheit(float celsium) {
	return (celsium * 1.8 + 32);
}