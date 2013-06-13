#include "winec.h"

Wine::Wine(const char* l, int y, const int year[], const int bot[]) : 
	label(l),
	years(y),
	year_and_bottles(ArrayInt(year, y), ArrayInt(bot, y)) { }


Wine::Wine(const char* l, int y ) : 
	label(l),
	years(y),
	year_and_bottles(ArrayInt(0, y), ArrayInt(0, y)) { }

void Wine::GetBottles() {
	cout << "Enter " << label << " data for  " << years << " year(s):" << endl;
	for (int i = 0; i < years; i++ ) {
		cout << "Please enter a year: ";
		cin >> year_and_bottles.first()[i];
		cout << "Enter bottles for that year: ";
		cin >> year_and_bottles.second()[i];
	}
}

string & Wine::Label() {
	return label;
}

int Wine::sum() {
	return year_and_bottles.second().sum();
}

void Wine::Show() const {
	cout << "Wine: " << label << endl;
	cout << "\tYear" << "\tBottles" << endl;
	for (int i = 0; i < years; i++ ) {
		cout << "\t" << year_and_bottles.first()[i] << "\t" << year_and_bottles.second()[i] << endl;
	}
}