#include <iostream>
#include<string>

using namespace std;

struct candyBar {
	char name[20];
	double weight;
	int calories;
};

int main() {
	candyBar snack = { "MochaMunch", 2.3, 350 };

	cout << snack.name << endl;
	cout << snack.weight << endl;
	cout << snack.calories << endl;

	cin.get();
	return 0;
}
