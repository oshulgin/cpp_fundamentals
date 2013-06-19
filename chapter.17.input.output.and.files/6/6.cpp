#include <fstream>
#include <cstdlib>
#include "emp.h"

const char * file = "test.txt";
const int MAX = 10;

int main() {
	char ch;
	abstr_emp* pc[MAX];

    ifstream fin;
    fin.open(file);

	// show initial contents
	if ( !fin.is_open() ) { 
		cerr << "Could not open source file" << endl;
		exit(EXIT_FAILURE);
	}
	if ( fin.peek() != EOF ) {
		cout << "Here are the current contents of the " << file << " file: \n";
		while (fin.get(ch))
			cout << ch;
		cout << endl;
		fin.close();
	}

	// entering new employees
	int ct;
    for (ct = 0; ct < MAX; ct++) {
        char choice;
        cout << "Enter the persons category:\n"
            << "e: employee  m: manager  "
            << "f: fink  h: highfink	q: quit\n";
        cin >> choice;
        while (strchr("emfhq", choice) == NULL)
        {
            cout << "Please enter a e, m, f, h, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
			//ct--;
            break;
        switch(choice)
        {
            case 'e':   pc[ct] = new employee;
                        break;
            case 'm':   pc[ct] = new manager;
                        break;
            case 'f':   pc[ct] = new fink;
                        break;
            case 'h':   pc[ct] = new highfink;
                        break;
        }
        cin.get();
        pc[ct]->SetAll();
    }

	// writing new employees to file
    ofstream fout(file, ios::out | ios::app);
    if (!fout.is_open()) {
        cerr << "Can't open " << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }
	for (int i = 0; i < ct; i++) {
		pc[i]->writeall(fout);
		fout << endl;
	}
	fout.close();

	// show revised file
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Here are the new contents of the " << file << " file: \n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }

	

	system("Pause");
	return 0;
}

//Write a program that uses standard C++ I/O and file I/O in conjunction with data
//of types employee,manager,fink,and highfink,as defined in Programming Exer-
//cise 5 in Chapter 14.The program should be along the general lines of Listing 17.18
//in that it should let you add new data to a file.
//The first time through,the program
//should solicit data from the user,show all the entries,and save the information in a
//file.On subsequent uses,the program should first read and display the file data,let the
//user add data,and show all the data.One difference is that data should be handled by
//an array of pointers to type employee.That way,a pointer can point to an employee
//object or to objects of any of the three derived types.Keep the array small to facili-
//tate checking the program.
//For keyboard entry,the program should use a menu to offer the user the choice of
//which type of object to create.The menu should use a switch to use newto create
//an object of the desired type and to assign the object’s address to a pointer in the pc
//array.Then that object can use the virtual setall()function to elicit the appropri-
//ate data from the user.