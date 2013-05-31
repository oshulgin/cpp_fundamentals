#include <iostream>
using namespace std;

int main() {
	int limit;
	
	cout << "Please enter a number of rows: ";
	cin >> limit;
	
	//char array[limit][limit];

	for (int rows = 1; rows <= limit; rows++) {
		for ( int cols = 0; cols < limit - rows; cols++) {
			cout << '.';
		}
		for ( int i = 0; i < rows; i++ ) {
			cout << '*';
		}
		cout << endl;
	}

	cin.get();
	cin.get();
	return 0;
}


//Write a program using nested loops that asks the user to enter a value for the
//number of rows to display. It should then display that many rows of a sterisks,with
//one a sterisk in the first row,two in the second row,and so on.For each row,the
//a sterisk sarepreceded by the number of periods needed to make all the rows
//display a total number of characters equal to the number of rows. A sample run
//would look like this:
//Enter number of rows: 5
//....*
//...**
//..***
//.****
//*****