#include <iostream>
#include<string>

using namespace std;

struct candyBar {
	char name[20];
	double weight;
	int calories;
};

int main() {
	candyBar snack[3] = { 
		{"MochaMunch", 2.3, 350 },
		{"Boo", 12.13, 40 },
		{"Icecream", 42.3, 12 },
	};

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
