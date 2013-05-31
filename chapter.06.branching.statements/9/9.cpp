#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int name_size = 30;

struct contributor {
	char name[name_size];
	int contribution;
};

int main() {
	ofstream output;
	ifstream input;

	output.open("output.txt");
	input.open("input.txt");

	if ( !input.is_open() ) {
		exit(EXIT_FAILURE);
	}
	
	int number_contr;
	input >> number_contr;
	input.get();
	cout << number_contr  << endl;

	contributor *contr_array = new contributor [number_contr];
	
	for ( int i = 0; i < number_contr; i++ ) {

		input.getline(contr_array[i].name, name_size);
		input >> contr_array[i].contribution;
		input.get();
	}

	cout << "Grand Patrons:" << endl;
	bool flag = false;
	for ( int i = 0; i < number_contr; i++ ) {
		if ( contr_array[i].contribution >= 10000 ) {
			flag = true;
			cout << contr_array[i].name << endl;
		}
	}
	if ( flag == false ) {
		cout << "None" << endl;
	}

	cout << "\nPatrons:" << endl;
	flag = false;
	for ( int i = 0; i < number_contr; i++ ) {
		if ( contr_array[i].contribution < 10000 ) {
			cout << contr_array[i].name << endl;
			flag = true;
		}
	}
	if ( flag == false ) {
		cout << "None" << endl;
	}

	system("pause");
	return 0;
}

//Do Programming Exercise 6 but modify it to get information from a file.The first
//item in the file should be the number of contributors,and the rest of the file should
//consist of pairs of lines,with the first line of each pair being a contributor’s name
//and the second line being a contribution.That is,the file should look like this:
//4
//Sam Stone
//2000
//Freida Flass
//100500
//Tammy Tubbs
//5000
//Rich Raptor
//55000