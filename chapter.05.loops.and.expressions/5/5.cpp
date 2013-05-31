#include <iostream>
using namespace std;

const int monthes = 12;

int main() {
	char *month[monthes] = { "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec" };
	int books_sold_arr[monthes] = {0};
	int sum = 0;

	cout << "Please enter a number of books sold in " << endl;
	for (int i = 0; i < monthes; i++) {
		cout << month[i] << ' ';
		cin >> books_sold_arr[i];
		sum += books_sold_arr[i];
	}

	cout << "Total sales: " << sum << endl;

	cin.get();
	cin.get();
	return 0;
}

//You sell the book C++ for Fools. Write a program that has you enter a year’s worth
//of monthly sales (in terms of number of books,not of money).The program should
//use a loop to prompt you by month,using an array of char *(or an array of
//string objects,if you prefer) initialized to the month strings and storing the input
//data in an array of int.Then, the program should find the sum of the array con-
//tents and report the total sales for the year.