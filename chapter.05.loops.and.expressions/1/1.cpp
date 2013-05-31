#include <iostream>
using namespace std;

int main() {
	cout << "Please enter two integers: ";
	int min, max, sum;
	cin >> min >> max;
	sum = 0;

	for ( int i = min; i <= max; i++) {
		sum += i;
	}
	cout << sum << endl;

	cin.get();
	cin.get();
	return 0;
}

//Write a program that requests the user to enter two integers.The program should
//then calculate and report the sum of all the integers between and including the two
//integers. At this point,assume that the smaller integer is entered first.For example,if
//the user enters 2and9,the program should report that the sum of all the integers
//from 2 through 9 is 44.