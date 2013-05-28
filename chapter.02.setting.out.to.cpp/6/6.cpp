#include <iostream>
using namespace std;

float light_to_astronomical(float light_years);

int main() {
	float light_years;

	cout << "Enter the number of light years: ";
	cin >> light_years;
	cout << light_years << " light years = " << light_to_astronomical(light_years) << " astronomical units" << endl; 

	cin.get();
	cin.get();

	return 0;
}

float light_to_astronomical(float light_years) {
	return 63240 * light_years;
}