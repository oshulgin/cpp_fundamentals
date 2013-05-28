#include<iostream>
using namespace std;

int main() {
	long long population_of_world;
	long long population_of_your_country;

	cout << "Enter the world's population: ";
	cin >> population_of_world;
	cout << "Please enter population of your country: ";
	cin >> population_of_your_country;

	cout << "The population of your country is " << long double(population_of_your_country * 100) / long double(population_of_world) << "% of the world population." << endl;

	cin.get();
	cin.get();
	return 0;
}