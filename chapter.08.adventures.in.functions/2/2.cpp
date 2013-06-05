#include <iostream>.
#include <string>
using namespace std;

struct candyBar {
	string brandName;
	double weight;
	int calories;
};

void fill_struct(candyBar &cb, char* name = "Millennium Munch", double w = 2.85, int c = 350);
void show_struct(candyBar &cb);

int main() {
	candyBar bar1;

	fill_struct(bar1);
	show_struct(bar1);

	candyBar bar2;
	fill_struct(bar2, "Mars", 3.33, 200);
	show_struct(bar2);

	system("Pause");
	return 0;
}

void fill_struct(candyBar &cb, char* name, double w, int c) {
	cb.brandName = name;
	cb.weight = w;
	cb.calories = c;
}

void show_struct(candyBar &cb) {
	cout << "Brand name: " << cb.brandName << endl;
	cout << "Weight: " << cb.weight << endl;
	cout << "Calories: " << cb.calories << endl;
}
//The CandyBar structure contains three members.The first member holds the brand
//name of a candy bar.The second member holds the weight (which may have a frac-
//tional part) of the candy bar,and the third member holds the number of calories
//(an integer value) in the candy bar. Write a program that uses a function that takes
//as arguments a reference to CandyBar,a pointer-to-char,a double,and an int and
//uses the last three values to set the corresponding members of the structure. The last
//three arguments should have default values of “Millennium Munch, ”2.85, and 350.
//Also the programshould use a function that takes a reference to a CandyBaras an 
//argument and displays the contents of the structure. Use constwhere appropriate.