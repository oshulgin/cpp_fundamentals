#include <iostream>
using namespace std;

const int Max = 5;

double* fill_array(double *begin, double *end);
void show_array(double *begin, double *end);
void revalue(double r, double *begin, double *end);

int main() {
	double properties[Max];
	double *end = fill_array(properties, properties + Max);

	int size = (end - properties);

	show_array(properties, end);

	if (size > 0) {
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}

	cout << "Done.\n";

	system("Pause");
	return 0;
}

double* fill_array(double *begin, double *end) {
	double temp;
	double *current;
	current = begin;
	int i = 0;

	for ( ; current != end; current++, i++) {
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		} else if ( temp < 0 ) {
			break;
		}
		*current = temp;
	}
	return current;
}

void show_array(double *begin, double *end) {
	double *current;
	current = begin;
	int i = 0;

	for ( ; current != end; current++, i++ )	{
		cout << "Property #" << (i + 1) << ": $";
		cout << *current << endl;
	}
}

void revalue(double r, double *begin, double*end) {
	double *current;
	current = begin;

	for ( ; current != end; current++ )
		(*current) *= r;
}

//Redo Listing 7.7,modifying the three array-handling functions to each use two
//pointer parameters to represent a range.The fill _array() function,instead of
//returning the actual number of items read,should return a pointer to the location
//after the last location filled;the other functions can use this pointer as the second
//argument to identify the end of the data.