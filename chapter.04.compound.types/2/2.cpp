#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string dessert;

	cout << "Enter your name:\n";
	cin >> name;

	cout << "Enter your favorite dessert:\n";
	cin >> dessert;

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	cin.get();
	cin.get();

return 0;
}