#include <iostream>

using namespace std;

const int limit = 10;

int main() {
	cout << "Please enter one of the folowing choises:" << endl;
	cout << "c) carnivore p) pianist" << endl;
	cout << "t) tree g) game" << endl;
	bool flag = true;

	char choice;
	cin >> choice;

	while( flag ) {
		switch(choice) {
			case 'c' : cout << "Tiger is a carnivore." << endl;
				flag = false;
				break;
			case 'p' : cout << "Shopen is a pianist." << endl;
				flag = false;
				break;
			case 't' : cout << "Maple ia a tree." << endl;
				flag = false;
				break;
			case 'g' : cout << "Football is a game." << endl;
				flag = false;
				break;
			default : cout << "Please enter a c, p, t, or g: ";
				cin >> choice;
		}
	}

	system("pause");
	return 0;
}

//Write a precursor to a menu-driven program.The program should display a menu
//offering four choices,each labeled with a letter.If the user responds with a letter
//other than one of the four valid choices,the program should prompt the user to
//enter a valid response until the user complies.Then the program should use a
//switch to select a simple action based on the user’s selection. A program run could
//look something like this:
//Please enter one of the following choices:
//c) carnivore p) pianist
//t) tree g) game
//f
//Please enter a c, p, t, or g: q
//Please enter a c, p, t, or g: t
//A maple is a tree.