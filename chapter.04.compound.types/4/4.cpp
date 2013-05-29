#include <iostream>
#include<string>

using namespace std;

int main() {
	cout << "Please enter your first name: ";
	string f_name;
	cin >> f_name;

	cout << "Please enter your second name: ";
	string s_name;
	cin >> s_name;

	string name;
	name.append(s_name).append(", ").append(f_name);

	cout << "Here is the information in a single string: " << name << endl;

	cin.get();
	cin.get();
	return 0;
}