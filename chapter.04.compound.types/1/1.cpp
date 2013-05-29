#include<iostream>
using namespace std;

int main() {
	
	cout << "What is your first name? ";
	char f_name[20];
	cin.getline(f_name, 20);

	cout << "What is your second name? ";
	char s_name[20];
	cin >> s_name;

	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;

	cout << "What is your age? ";
	int age;
	cin >> age;

	cout << "Name: " << s_name << ", " << f_name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;

	cin.get();
	cin.get();
	return 0;
}
