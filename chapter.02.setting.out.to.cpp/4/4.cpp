#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "Please enter your age: ";
	cin >> age;
	cout << "Your age in months is: " << age * 12 << endl;
	
	cin.get();
	cin.get();

	return 0;
}