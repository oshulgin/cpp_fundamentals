#include <iostream>

using namespace std;

const int strsize = 30;
const int arr_size = 5;

struct bop {
	char fullname[strsize]; // real name
	char title[strsize]; // job title
	char bopname[strsize]; // secret BOP name
	int preference; // 0 = fullname, 1 = title, 2 = bopname
};

int main() {
	bop bop_arr[arr_size] = {
		{ "Wimp Macho" , "Junior Programmer", "Qwq" , 0},
		{ "Raki Rhodes" , "Middle Programmer", "OpO", 2},
		{ "Celia Laiter" , "Senior Programmer", "123", 1},
		{ "Hoppy Hipman" , "QA engineer", "r2d2", 1},
		{ "Pat Hand" , "Analyst Trainee", "42", 0},
	};

	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name    b. display by title" << endl;
	cout << "c. display by bopname d. display by preference" << endl;
	cout << "q. quit" << endl;
	
	cout << "Enter a choice" << endl;
	char choice;
	cin >> choice;
	
	while( choice != 'q' ) {
		switch(choice) {
			case 'a' :
				for (int i = 0; i < arr_size; i++) {
					cout << bop_arr[i].fullname << endl;
				}
				break;
			case 'b' :
				for (int i = 0; i < arr_size; i++) {
					cout << bop_arr[i].title << endl;
				}
				break;
			case 'c' :
				for (int i = 0; i < arr_size; i++) {
					cout << bop_arr[i].bopname << endl;
				}
				break;
			case 'd' :
				for (int i = 0; i < arr_size; i++) {
					if ( bop_arr[i].preference == 0)
						cout << bop_arr[i].fullname << endl;
					else if ( bop_arr[i].preference == 1 )
						cout << bop_arr[i].title << endl;
					else 
						cout << bop_arr[i].bopname << endl;
				}
				break;
			default : cout << "That's not a choice.\n";
				
		}
		cout << "Next choice:" << endl;
		cin >> choice;
	}

	cout << "Bye!" << endl;
	system("pause");
	return 0;
}

//When you join the Benevolent Order of Programmers,you can be known at BOP
//meetings by your real name,your job title,or your secret BOP name.Write a pro-
//gram that can list members by real name,by job title,by secret name,or by a mem-
//ber’s preference.Base the program on the following structure:
//
//
//// Benevolent Order of Programmers name structure
//struct bop {
//	char fullname[strsize]; // real name
//	char title[strsize]; // job title
//	char bopname[strsize]; // secret BOP name
//	int preference; // 0 = fullname, 1 = title, 2 = bopname
//};
//
//In the program,create a small array of such structures and initialize it to suitable
//values.Have the program run a loop that lets the user select from different alterna-
//tives:
//a. display by name    b. display by title
//c. display by bopname d. display by preference
//q. quit

//Note that “display by preference”does not mean display the preference member;it
//means display the member corresponding to the preference number.For instance,if
//preference is 1,choice dwould display the programmer’s job title. A sample run
//may look something like the following:

//Benevolent Order of Programmers Report
//a. display by name    b. display by title
//c. display by bopname d. display by preference
//q. quit
//Enter your choice: a
//Wimp Macho
//Raki Rhodes
//Celia Laiter
//Hoppy Hipman
//Pat Hand
//Next choice: d
//Wimp Macho
//Junior Programmer
//MIPS
//Analyst Trainee
//LOOPY
//Next choice: q
//Bye!