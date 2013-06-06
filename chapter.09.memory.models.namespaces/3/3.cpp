#include <iostream>
#include <new>
#include <cstring>

using namespace std;
const int buffer_size = 200;
const int arr_size = 2;
char buffer[buffer_size];

struct chaff {
	char dross[20];
	int slag;
};

void set_chaff(chaff &ch, char*, int s);
void show_chaff(const chaff &ch);

int main() {
	chaff *chaff_arr = new(buffer) chaff[arr_size];
	chaff *chaff_arr2 = new chaff[arr_size];

	set_chaff(chaff_arr[0], "dross11", 20);
	set_chaff(chaff_arr[1], "dross22", 42);


	set_chaff(chaff_arr2[0], "dross1111", 2000);
	set_chaff(chaff_arr2[1], "dross2222", 4200);

	for ( int i = 0; i < arr_size; i++ ) {
		show_chaff(chaff_arr[i]);
	}

	for ( int i = 0; i < arr_size; i++ ) {
		show_chaff(chaff_arr2[i]);
	}

	system("Pause");
	return 0;
}

void set_chaff(chaff &ch, char* d, int s) {
	strcpy(ch.dross, d);
	ch.slag = s;
}

void show_chaff(const chaff &ch) {
	cout << "Dross: " << ch.dross << endl;
	cout << "Slag: " << ch.slag << endl;
}
//Write a program that uses placement new to place an array of two such structures in
//a buffer.Then assign values to the structure members (remembering to use
//strcpy() for the char array) and use a loop to display the contents. Option 1 is to
//use a static array, like that in Listing 9.10 ,for the buffer. Option 2 is to use regular
//new to allocate the buffer.