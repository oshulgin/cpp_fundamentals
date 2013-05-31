#include <iostream>
using namespace std;

const int monthes = 12;
const int years = 3;

int main() {
	char *month_arr[monthes] = { "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec" };
	int books_sold_arr[years][monthes] = {0};
	int total_sum = 0;
	int sum_year[years] = {0};

	cout << "Please enter a number of books sold in " << endl;
	for (int year = 0; year < years; year++) {
		cout << "year " << year + 1 << ':' << endl;
		for (int month = 0; month < monthes; month++) {
			cout << month_arr[month] << ' ';
			cin >> books_sold_arr[year][month];
			total_sum += books_sold_arr[year][month];
			sum_year[year] += books_sold_arr[year][month];
		}
		cout << "Book sold this year: " << sum_year[year] << endl;
		cout << endl;
	}

	cout << "Total sales: " << total_sum << endl;

	cin.get();
	cin.get();
	return 0;
}

//Do Exercise 5 but use a two-dimensional array to store input for 3
//years of monthly sales. Report the total sales for each individual year and for the
//combined years.