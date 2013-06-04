#include <iostream>
using namespace std;

const int limit = 10;

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};


void show_box(box b);
void set_values(box *b);

int main() {
	box b1 = { "QWE", 10, 10, 10, 1000 };
	box b2;

	show_box(b1);
	set_values(&b2);
	show_box(b2);

	system("Pause");
	return 0;
}

void show_box(box b) {
	cout << "Maker: " << b.maker << endl;
	cout << "Height: " << b.height << endl;
	cout << "Width: " << b.width << endl;
	cout << "Lenght: " << b.length << endl;
	cout << "Volume: " << b.volume << endl;
}

void set_values(box *b) {
	cout << "Enter a maker: ";
	cin >> b->maker;
	cout << "Enter a height: ";
	cin >> b->height;
	cout << "Enter a width: ";
	cin >> b->width;
	cout << "Enter a lenght: ";
	cin >> b->length;
	cout << "Enter a volume: ";
	cin >> b->volume;
}


//a. Write a function that passes a box structure by value and that displays the
//value of each member.
//b. Write a function that passes the address of a box structure and that sets the
//volume member to the product of the other three dimensions.
//c. Write a simple program that uses these two functions.