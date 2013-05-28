#include<iostream>
using namespace std;

//int main() {
//	int height_in_inches;
//
//	cout << "Please enter your height in inches: ___\b\b\b";
//	cin >> height_in_inches;
//
//	cout << "Your height is: " << height_in_inches / 12 << " feet and " << height_in_inches % 12 << " inches." << endl;
//
//	cin.get();
//	cin.get();
//	return 0;
//}


int main() {
	const int feet_conversion_coef = 12;
	const double meters_feet_conversion_coef = 0.0254;
	const double weight_conversion_coef = 2.2;

	int feet_in_height;
	int inches_in_height;
	int weight_in_pounds;
	double height_in_meters;
	double weight_in_kilos;
	double bmi;

	cout << "Please enter your how many feet in your height: ";
	cin >> feet_in_height;
	cout << "Please enter your how many inches in your height: ";
	cin >> inches_in_height;

	cout << "Please enter your weight in pounds: ";
	cin >> weight_in_pounds;

	height_in_meters = ( feet_conversion_coef * feet_in_height + inches_in_height ) * meters_feet_conversion_coef;
	weight_in_kilos = weight_in_pounds / weight_conversion_coef;

	bmi = weight_in_kilos / ( height_in_meters * height_in_meters );
	cout << "Your BMI is: " << bmi << endl;

	cin.get();
	cin.get();
	return 0;
}