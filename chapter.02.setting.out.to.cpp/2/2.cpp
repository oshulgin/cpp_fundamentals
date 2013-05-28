#include <iostream>
using namespace std;

int main() {
	int furlongs;

	cout << "Please enter a distance in furlongs: " << endl;
	cin >> furlongs;
	cout << "Your distance in yards is: " << furlongs * 220 << endl;
	
	cin.get();
	cin.get();

	return 0;
}