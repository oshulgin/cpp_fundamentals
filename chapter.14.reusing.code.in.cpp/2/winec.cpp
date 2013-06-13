#include "winec.h"

Wine::Wine(const char* l, int y, const int year[], const int bot[]) : 
	string(l),
	years(y),
	PairArray(ArrayInt(year, y), ArrayInt(bot, y)) { }


Wine::Wine(const char* l, int y ) : 
	string(l),
	years(y),
	PairArray(ArrayInt(0, y), ArrayInt(0, y)) { }

void Wine::GetBottles() {
	cout << "Enter " << (const string &) *this << " data for  " << years << " year(s):" << endl;
	for (int i = 0; i < years; i++ ) {
		cout << "Please enter a year: ";
		cin >> PairArray::first()[i];
		cout << "Enter bottles for that year: ";
		cin >> PairArray::second()[i];
	}
}

string & Wine::Label() {
	return (string &)*this;
}

int Wine::sum() {
	return PairArray::second().sum();
}

void Wine::Show() const {
	cout << "Wine: " << (const string &) *this << endl;
	cout << "\tYear" << "\tBottles" << endl;
	for (int i = 0; i < years; i++ ) {
		cout << "\t" << PairArray::first()[i] << "\t" << PairArray::second()[i] << endl;
	}
}