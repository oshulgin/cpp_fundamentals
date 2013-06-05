#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T arr[], int size);

template<> char* maxn<char*>(char* arr[], int size);

int main(){
	int int_arr[6] = { 2, 3, 4, 42, 0, -2 };
	double double_arr[4] = { 0.3, 2.3, 22.3, 4.5 };
	char* char_arr[5] = { "Hello", "Bye-eee", "World", "Earth", "Mars" };

	cout << maxn(int_arr, 6) << endl;
	cout << maxn(double_arr, 4) << endl;
	cout << maxn(char_arr, 5) << endl;

	system("Pause");
	return 0;
}

template <typename T>
T maxn(T arr[], int size) {
	T max = arr[0];
	for ( int i = 1; i < size; i++ ) {
		if ( arr[i] > max ) {
			max = arr[i];
		}
	}
	return max;
}

template<> char* maxn<char*>(char* arr[], int size) {
	char* max;
	max = arr[0];

	for ( int i = 0; i < size; i++ ) {
		if ( strlen(max) < strlen(arr[i]) ) {
			max = arr[i];
		}
	}
	return max;
}

//Write a template function maxn() that takes as its arguments an array of items of
//type T and an integer representing the number of elements in the array and that
//returns the largest item in the array. Test it in a program that uses the function template
//with an array of six int value and an array of four double values.

//The program
//should also include a specialization that takes an array of pointers-to-charas
//an argument and the number of pointers as a second argument and that returns the
//address of the longest string. If multiple strings are tied for having the longest
//length, the function should return the address of the first one tied for longest.Test
//the specialization with an array of five string pointers.