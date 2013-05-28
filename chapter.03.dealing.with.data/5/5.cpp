#include<iostream>
using namespace std;

int main() {
	int kilometers;
	int liters;
	double gasoline_consumption;

	cout << "Please enter how many kilometers you have driven: ";
	cin >> kilometers;
	cout << "Please enter how many liters of gasoline you have used: ";
	cin >> liters;

	gasoline_consumption = double(liters * 100 / kilometers);

	cout << "Your gasoline consumption is " << gasoline_consumption << " liters per 100 kilometers." << endl;

	cin.get();
	cin.get();
	return 0;
}