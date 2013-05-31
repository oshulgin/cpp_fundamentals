#include <iostream>
#include <cstring>

using namespace std;

const int size_arr = 30;

struct car {
	char name[size_arr];
	int year;
};

int main() {
	cout << "How many cars do you wish to catalog? ";
	int number_of_cars;
	cin >> number_of_cars;
	cin.get();
	car *car_arr = new car[number_of_cars];

	for (int i = 0; i < number_of_cars; i++) {
		cout << "Car #" << i+1 << ':' << endl;
		cout << "Please enter the make: ";
		cin.getline(car_arr[i].name, size_arr);
		cout << "Please enter the year made: ";
		cin >> car_arr[i].year;
		cin.get();
	}

	cout << "Here is your collection:" << endl;
	for (int i = 0; i < number_of_cars; i++) {
		cout << car_arr[i].year << ' ' << car_arr[i].name << endl;
	}

	cin.get();
	return 0;
}

//Design a structure called car that holds the following information about an auto-
//mobile:its make,as a string in a character array or in a string object,and the year
//it was built,as an integer. Write a program that asks the user how many cars to cata-
//log. The program should then use new to create a dynamic array of that many car
//structures. Next, it should prompt the user to input the make (which might consist
//of more than one word) and year information for each structure. Note that this
//requires some care because it alternates reading strings with numeric data (see Chapter 4).
//Finally,it should display the contents of each structure. A sample run
//should look something like the following:
//How many cars do you wish to catalog? 2
//Car #1:
//Please enter the make: Hudson Hornet
//Please enter the year made: 1952
//Car #2:
//Please enter the make: Kaiser
//Please enter the year made: 1951
//Here is your collection:
//1952 Hudson Hornet
//1951 Kaiser