#include<iostream>
using namespace std;

int main() {
	const int sec_in_min = 60;
	const int min_in_hour = 60;
	const int hours_in_day = 24;
	long long days;
	long long hours;
	long long mins;
	long long seconds;
	long long amount_of_seconds;

	cout << "Enter the number of seconds: ";
	cin >> amount_of_seconds;

	days = amount_of_seconds / ( sec_in_min * min_in_hour * hours_in_day);
	hours = ( amount_of_seconds - days * sec_in_min * min_in_hour * hours_in_day ) / ( sec_in_min * min_in_hour );
	mins = ( amount_of_seconds - days * sec_in_min * min_in_hour * hours_in_day ) % ( sec_in_min * min_in_hour ) / min_in_hour;
	seconds = amount_of_seconds - days * sec_in_min * min_in_hour * hours_in_day - hours * sec_in_min * min_in_hour - mins * sec_in_min;
	cout << amount_of_seconds << " seconds = " << days << " days, " << hours << " hours, " << mins << " mins and " << seconds << " seconds." << endl;

	cin.get();
	cin.get();
	return 0;
}