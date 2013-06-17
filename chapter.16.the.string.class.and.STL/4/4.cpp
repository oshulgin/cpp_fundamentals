#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int reduce(long ar[], int n);

const int SIZE = 10;

int main() {
	long ar[10] = { 1, 1, 2, 2, 1, 3, 3, 3, 0, 0 };

	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << ' ';
	}

	cout << "\nNew size: " << reduce(ar, SIZE) << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << ' ';
	}
	cout << endl;

	system("Pause");
	return 0;
}

int reduce(long ar[], int n) {
	sort(ar, ar+n);
	int new_size = unique(ar, ar+n) - ar;

	return new_size;
}

//Write a function with an old-style interface that has this prototype:
//int reduce(long ar[], int n);
//The actual arguments should be the name of an array and the number of elements
//in the array.The function should sort an array,remove duplicate values,and return a
//value equal to the number of elements in the reduced array.Write the function
//using STL functions.(If you decide to use the general unique()function,note that
//it returns the end of the resulting range.) Test the function in a short program.