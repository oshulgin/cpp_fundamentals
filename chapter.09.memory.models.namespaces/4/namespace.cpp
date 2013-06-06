#include "namespace.h"
#include <iostream>

using namespace std;

namespace SALES {

	void setSales(Sales & s, const double ar[], int n) {
		double sum = 0.0;
		s.min = s.max = ar[0];

		for ( int i = 0; i < n; i++ ) {
			s.sales[i] = ar[i];
			if ( s.min > s.sales[i] ) { s.min = s.sales[i]; }
			if ( s.max < s.sales[i] ) { s.max = s.sales[i]; }
			sum += s.sales[i];
		}

		s.average = sum / n;
	}

	void setSales(Sales & s) {
		double sum = 0.0;
		s.min = 10000,0; 
		s.max = 0.0;

		cout << "Please enter sales for 4 quarters: " << endl;
		for ( int i = 0; i < QUARTERS; i++ ) {
			cout << "for the " << i + 1 << " quarter: ";
			cin >> s.sales[i];
			if ( s.min > s.sales[i] ) { s.min = s.sales[i]; }
			if ( s.max < s.sales[i] ) { s.max = s.sales[i]; }
			sum += s.sales[i];
		}

		s.average = sum / QUARTERS;
	}

	void showSales(const Sales & s) {
		for ( int i = 0; i < QUARTERS; i++ ) {
			cout << "Sales in " << i + 1 << "quarter: " << s.sales[i] << endl;
		}
		cout << "Average: " << s.average << endl;
		cout << "Min: " << s.min << endl;
		cout << "Max: " << s.max << endl;
	}
}