#include <iostream>
using namespace std;

template <typename T>
T max5(T arr[]);

int main() {
	int int_arr[5]={ 1, 3, 6, 56, 0 };
	float float_arr[5]={ 1.2, -25.4, 32.4, -42.2, 42.2 };

	cout << max5(int_arr) << endl;
	cout << max5(float_arr) << endl;

	system("Pause");
	return 0;
}

template <typename T>
T max5(T a[]) {
	T max = a[0];

	for ( int i = 1; i < 5; i++ ) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}

//Write a template function max5()that takes as its argument an array of five items
//of type T and returns the largest item in the array. (Becausethe size is fixed,it can
//be hard-coded into the loop instead of being passed as an argument.) Test it in a
//program that uses the function with an array of five int value and an array of five
//double values.