#include <iostream>
using namespace std;

void show_time(int hours, int minutes);

int main() {
	int hours;
	int minutes;

	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;

	show_time(hours, minutes);

	cin.get();
	cin.get();

	return 0;
}

void show_time(int hours, int minutes) {
	cout << "Time: " << hours << ':' << minutes << endl;
}