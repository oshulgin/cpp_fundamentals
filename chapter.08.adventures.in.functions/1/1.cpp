#include <iostream>.
#include <string>
using namespace std;

void print_str(string *str, int value = 0);

int times = 0;

int main() {
	string str = "Hello world";
	
	print_str(&str);
	print_str(&str);
	print_str(&str);
	print_str(&str, 4);

	system("Pause");
	return 0;
}

void print_str(string *str, int value) {
	if ( value == 0 ) {
		cout << *str << endl;
		times++;
	} else {
		for (int i = 0; i < times; i++) {
			cout << *str << endl;
		}
	}
}
//Write a function that normally takes one argument, the address of a string,and
//prints that string once. However,if a second,type int,argument is provided and is
//nonzero,the function should print the string a number of times equal to the number of
//times that function has been called at that point. (Note that the number of
//times the string is printed is not equal to the value of the second argument; it is equal to
//the number of times the function has been called.) Yes, this is a silly function, but it makes
//you use some of thetechniques discussed in this chapter. Use the
//function in a simple program that demonstrates how the function works.