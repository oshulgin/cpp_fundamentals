#include <iostream>
#include<string>

using namespace std;

struct candyBar {
	string name;
	double weight;
	int calories;
};

int main() {
	candyBar *snack = new candyBar [3];

	snack[0].name = "MochaMunch";
	snack[0].weight = 2.3;
	snack[0].calories = 400;

	snack[1].name = "Boo";
	snack[1].weight = 3.4;
	snack[1].calories = 40;

	snack[2].name = "IceCream";
	snack[2].weight = 0.3;
	snack[2].calories = 10;

	cout << snack[0].name << endl;
	cout << snack[0].weight << endl;
	cout << snack[0].calories << endl;
	cout << endl;

	cout << snack[1].name << endl;
	cout << snack[1].weight << endl;
	cout << snack[1].calories << endl;
	cout << endl;

	cout << snack[2].name << endl;
	cout << snack[2].weight << endl;
	cout << snack[2].calories << endl;

	cin.get();
	return 0;
}
