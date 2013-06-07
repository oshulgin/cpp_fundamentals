#include "sales.h"
#include <iostream>

using namespace std;

namespace SALES {
	Sales::Sales(const double ar[], int n) {
		double sum = 0.0;
		min = max = ar[0];

		for ( int i = 0; i < n; i++ ) {
			sales[i] = ar[i];
			if ( min > sales[i] ) { min = sales[i]; }
			if ( max < sales[i] ) { max = sales[i]; }
			sum += sales[i];
		}

		average = sum / n;
	}

	Sales::Sales() {
		double sum = 0.0;
		min = 10000,0; 
		max = 0.0;

		cout << "Please enter sales for 4 quarters: " << endl;
		for ( int i = 0; i < QUARTERS; i++ ) {
			cout << "for the " << i + 1 << " quarter: ";
			cin >> sales[i];
			if ( min > sales[i] ) { min = sales[i]; }
			if ( max < sales[i] ) { max = sales[i]; }
			sum += sales[i];
		}

		average = sum / QUARTERS;
	}

	void Sales::showSales() {
		for ( int i = 0; i < QUARTERS; i++ ) {
			cout << "Sales in " << i + 1 << "quarter: " << sales[i] << endl;
		}
		cout << "Average: " << average << endl;
		cout << "Min: " << min << endl;
		cout << "Max: " << max << endl;
	}
}