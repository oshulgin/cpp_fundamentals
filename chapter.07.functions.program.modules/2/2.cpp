#include <iostream>
using namespace std;

const int limit = 10;

int input(const int limit, double arr_scores[]);
void display(const int limit, double arr_scores[]);
double average(const int limit, double arr_scores[]);

int main() {
	double arr_scores[limit];

	int number = input(limit, arr_scores);
	display(number, arr_scores);
	cout << "The average: " << average(number, arr_scores) << endl;

	system("Pause");
	return 0;
}

int input(const int limit, double arr_scores[]) {
	double score;
	int number = 0;

	cout << "Please enter up to 10 golf scores. ";
	cout << "For terminating input enter -1." << endl;
	cin >> score;

	for ( int i = 0; i < limit && score != -1; i++, number++ ) {
		arr_scores[i] = score;
		cin >> score;
	}
	 return number;
}

void display(int number, double arr_scores[]) {
	for ( int i = 0; i < number; i++ ) {
		cout << arr_scores[i] << ' ';
	}
}

double average(int number, double arr_scores[]) {
	double sum = 0;
	for ( int i = 0; i < number; i++ ) {
		sum += arr_scores[i];
	}

	return sum / number;
}

//Write a program that asks the user to enter up to 10 golf scores, which are to be
//stored in an array. You should provide a means for the user to terminate input prior
//to entering 10 scores. The program should display all the scores on one line and
//report the average score. Handle input, display, and the average calculation with
//three separate array-processing functions.