#include <iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt & st, int n);

const int arr_size = 6;
int main()
{
    Stonewt ethalon(11, 0);
	Stonewt st_arr[arr_size] = { 123, 168, 394 };
	Stonewt min = 1000000;
	Stonewt max = 0;
	int st_bigger_ethalon = 0;

	for ( int i = 3; i < arr_size; i++ ) {
		cout << "Enter weight of the " << i + 1 << " stone in pounds" << endl;
		double tmp;
		cin >> tmp;
		st_arr[i] = tmp;
	}

	for ( int i = 0; i < arr_size; i++ ) {
		if ( min > st_arr[i] ) { min = st_arr[i]; }
		if ( max < st_arr[i] ) { max = st_arr[i]; }
		if ( st_arr[i] >= ethalon ) { st_bigger_ethalon++; } 
	}

	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Number of stones greater then 11 stones: " << st_bigger_ethalon << endl;

	system("Pause");
    return 0;
}

//Rewrite the Stonewtclass (Listings 11.16and 11.17) so that it overloads all six
//relational operators.The operators should compare the poundsmembers and return
//a type boolvalue.Write a program that declares an array of six Stonewtobjects and
//initializes the first three objects in the array declaration.Then it should use a loop
//to read in values used to set the remaining three array elements.Then it should
//report the smallest element,the largest element,and how many elements are greater
//or equal to 11 stone.(The simplest approach is to create a Stonewtobject initial-
//ized to 11 stone and to compare the other objects with that object.)
