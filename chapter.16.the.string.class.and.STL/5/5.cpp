#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template <class T>
int reduce(T ar[], int n) {
	sort(ar, ar+n);
	int new_size = unique(ar, ar+n) - ar;

	return new_size;
}

const int SIZE = 10;

int main() {
	long ar[10] = { 1, 1, 2, 2, 1, 3, 3, 3, 0, 0 };
	string str_ar[10] = { "new", "new", "old", "one", "two","two", "few", "few", "one", "and" };

	cout << "For long ar[10]: " << endl;
	cout << "New size: " << reduce(ar, SIZE) << endl;

	cout << "For string str_ar[10]: " << endl;
	cout << "New size: " << reduce(str_ar, SIZE) << endl;
	
	system("Pause");
	return 0;
}


//Do the same problem as described in Programming Exercise 4,except make it a
//template function:
//template <class T>
//int reduce(T ar[], int n);
//Testthefunction in ashortprogram,usingbothalonginstantiation andastring
//instantiation.