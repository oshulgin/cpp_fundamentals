#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	char arr[22];
	char tmp;
	int number;

	cout << "Enter a word: ";
	cin.getline(arr, 22);

	cout << "Enter a number: ";
	cin >> number;

	cout << "Name: " << arr << endl;
	cout << "Number: " << number << endl;

	system("pause");
	return 0;
}
