#include <iostream>
#include<cstring>

using namespace std;

int main() {
	cout << "Please enter your first name: ";
	char f_name[20];
	cin.getline(f_name, 20);

	cout << "Please enter your second name: ";
	char s_name[20];
	cin.getline(s_name, 20);

	char name[45] = {0};
	strcpy(name, s_name);
	strcat(name, ", ");
	strcat(name, f_name);
	cout << "Here is the information in a single string: " << name << endl;

	cin.get();
	return 0;
}