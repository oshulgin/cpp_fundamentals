#include <iostream>
using namespace std;

const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);
// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);
// display2() takes the addressof student structure as an
// argument and displays the structure’s contents
void display2(const student * ps);
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];

	int entered = getinfo(ptr_stu, class_size);

	for (int i = 0; i < entered; i++)
	{
		//display1(ptr_stu[i]);
		//display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);

	delete [] ptr_stu;
	cout << "Done\n";

	system("Pause");
	return 0;
}

int getinfo(student pa[], int n) {
	int i = 0;
	int counter = 0;

	while ( i < n ) {
		cout << "Please enter student's full name: ";
		cin.getline(pa->fullname, SLEN);
		if ( strlen(pa->fullname) == 0 ) {
			break;
		}
		cout << "Please enter student's hobby: ";
		cin.getline(pa->hobby, SLEN);
		cout << "Please enter student's OOP level: ";
		cin >> pa->ooplevel;
		cin.get();
		counter++;
		i++;
		pa++;
	}
	return counter;
}

void display1(student st) {
	cout << "Student's name: " << st.fullname << endl;
	cout << "Student's hobby: " << st.hobby << endl;
	cout << "Student's OOP level: " << st.ooplevel << endl;
}

void display2(const student * ps) {
	cout << "Student's name: " << ps->fullname << endl;
	cout << "Student's hobby: " << ps->hobby << endl;
	cout << "Student's OOP level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
	for ( int i = 0; i < n; i++ ) {
		display2(pa);
		pa++;
	}
}

//This exercise provides practice in writing functions dealing with arrays and struc-
//tures.The following is a program skeleton .Complete it by providing the described
//functions: