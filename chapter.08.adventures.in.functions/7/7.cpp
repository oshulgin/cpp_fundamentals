#include <iostream>
using namespace std;

template <typename T> // template A
T SumArray(T arr[], int n);

template <typename T> // template B
T SumArray(T * arr[], int n);

struct debts {
	char name[50];
	double amount;
};

int main() {
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] = {
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};

	double * pd[3];
	for (int i = 0; i < 3; i++) {
		pd[i] = &mr_E[i].amount;
	}

	cout << "Mr. E's counts of things:\n";
	cout << SumArray(things, 6) << endl;

	cout << "Mr. E's debts:\n";
	cout << SumArray(pd, 3) << endl;

	system("Pause");
	return 0;
}

template <typename T>
T SumArray(T arr[], int n) {
	cout << "template A\n";
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

template <typename T>
T SumArray(T * arr[], int n){
	cout << "template B\n";
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += *arr[i];
	}
	return sum;
}

//Modify Listing 8.14 so that it uses two template functions called SumArray() to
//return the sum of the array contents instead of displaying the contents.The pro-
//gram now should report the total number of things and the sum of all the debts.