#include <iostream>
#include<string>

using namespace std;

struct pizza {
	char company_name[30];
	double weight;
	int diameter;
};

int main() {
	pizza mamamia;

	cout << "Please enter company name: ";
	cin.getline(mamamia.company_name, 30);

	cout << "Please enter the diameter of the pizza: ";
	cin >> mamamia.diameter;

	cout << "Please enter the weight of the pizza: ";
	cin >> mamamia.weight;

	cout << "Company name: " << mamamia.company_name << endl;
	cout << "Diameter of the pizza: " << mamamia.diameter << endl;
	cout << "Weight of the pizza: " << mamamia.weight << endl;

	cin.get();
	cin.get();
	return 0;
}
