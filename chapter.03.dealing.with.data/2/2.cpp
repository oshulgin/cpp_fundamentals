#include<iostream>
using namespace std;

int main() {
	const int coef = 60;
	int degrees;
	int minutes;
	int seconds;
	double fract;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	fract = double( coef * minutes + seconds ) / double( coef * coef );
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees + fract << " degrees" << endl;
	
	cin.get();
	cin.get();
	return 0;
}