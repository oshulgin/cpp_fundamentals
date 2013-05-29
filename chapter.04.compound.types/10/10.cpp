#include <iostream>
#include <array>

using namespace std;

int main() {
	array<double, 3> arr;

	cout << "Please enter the first time: ";
	cin >> arr[0];

	cout << "Please enter the second time: ";
	cin >> arr[1];

	cout << "Please enter the third time: ";
	cin >> arr[2];

	cout << "The average value is: " << ( arr[0] + arr[1] + arr[2] ) / 3 << endl;

	cin.get();
	cin.get();
	return 0;
	return 0;
}

//Write a program that requests the user to enter three times for the 40-yd dash (or
//40-meter,if you prefer) and then displays the times and the average.Use an array
//object to hold the data.(Use a built-in array if arrayis not available.)