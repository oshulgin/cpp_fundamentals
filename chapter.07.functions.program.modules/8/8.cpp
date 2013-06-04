#include <iostream>
#include <string>

using namespace std;

const int Seasons = 4;
const char* names[] = { "Spring", "Summer", "Fall", "Winter" };


void fill(double arr[]);
void show(double arr[]);

int main() {
	double arr[Seasons];

	fill(arr);
	show(arr);


	system("Pause");
	return 0;
}

void fill(double arr[]){
	for ( int i = 0; i < Seasons; i++ ) {
		cout << "Enter " << names[i] << " expenses: ";
		cin >> arr[i];
	}
}

void show(double arr[]) {
	double total = 0.0;
	cout << "\nEXPENSES" << endl;
	for ( int i = 0; i < Seasons; i++ ) {
		cout << names[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

//Redo Listing 7.15 without using the arrayclass.Do two versions:
//a. Use an ordinary array of const char * for the strings representing the sea-
//son names,and use an ordinary array of double for the expenses.
//b. Use an ordinary array of const char * for the strings representing the sea-
//son names,and use a structure whose sole member is an ordinary array of
//double for the expenses.(This design is similar to the basic design of the
//array class.)