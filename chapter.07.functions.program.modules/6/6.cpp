#include <iostream>
using namespace std;

const int limit = 10;

int fill_array(double arr[], const int limit);
void show_array(double arr[], int size);
void reverse_array(double arr[], int size);

int main() {
	double arr[limit] = { 0 };

	int size;
	size = fill_array(arr, limit);
	show_array(arr, size);
	
	reverse_array(arr, size);
	show_array(arr, size);

	reverse_array(arr+1, size-2);
	show_array(arr, size);

	system("Pause");
	return 0;
}

int fill_array(double arr[], const int limit) {
	double value;
	int number = 0;
	int i = 0;
	cout << "Please enter up to 10 values. ";
	cout << "For terminating input enter q." << endl;
	while (i < limit && cin >> value ) {
		arr[i] = value;
		i++;
		number++;
	}
	cout << "Number of values: " << number << endl;
	return number;
}

void show_array(double arr[], int size) {
	for ( int i = 0; i < size; i++ ) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void reverse_array(double arr[], int size) {
	double tmp;
	for ( int i = 0, last = size-1; i <= last ; i++, last--) {
		tmp= arr[last];
		arr[last] = arr[i];
		arr[i] = tmp;
	}
}

//Write a program that uses the following functions:
//Fill _array() takes as arguments the name of an array of double values and an
//array size. It prompts the user to enter double values to be entered in the array. It
//ceases taking input when the array is full or when the user enters non-numeric
//input, and it returns the actual number of entries.
//Show_ array()takes as arguments the name of an array of double values and an
//array size and displays the contents of the array.
//Reverse_ array()takes as arguments the name of an array of double values and an
//array size and reverses the order of the values stored in the array.
//The program should use these functions to fill an array,show the array, reverse the
//array, show the array, reverse all but the first and last elements of the array, and then
//show the array.