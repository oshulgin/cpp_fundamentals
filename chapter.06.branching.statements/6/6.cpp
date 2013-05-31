#include <iostream>
using namespace std;

const int name_size = 30;

struct contributor {
	char name[name_size];
	double contribution;
};

int main() {
	cout << "Please enter a number of contributors: ";
	int number_contr;
	cin >> number_contr;
	cin.get();

	contributor *contr_array = new contributor [number_contr];
	

	for ( int i = 0; i < number_contr; i++ ) {
		cout << "Please enter the name of " << i + 1 << " contributor: ";
		//cin >> contr_array[i].name;
		cin.getline(contr_array[i].name, name_size);
		cout << "Please enter the amount of " << i + 1 << " contribution: ";
		cin >> contr_array[i].contribution;
		cin.get();
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

//Put together a program that keeps track of monetary contributions to the Society
//for the Preservation of Rightful Influence. 
//It should ask the user to enter the number of contributors and then solicit the user to enter the name and contribution of
//each contributor. The information should be stored in a dynamically allocated array
//of structures. Each structure should have two members:a character array (or else a
//string object) to store the name and a doublemember to hold the amount of the
//contribution.
//
//After reading all the data,the program should display the names and
//amounts donated for all donors who contributed $10,000 or more.This list should
//be headed by the label Grand Patrons. After that,the program should list the
//remaining donors.That list should be headed Patrons.If there are no donors in one
//of the categories,the program should print the word “none.” Aside from displaying
//two categories,the program need do no sorting.