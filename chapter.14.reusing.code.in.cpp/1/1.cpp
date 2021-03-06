#include <iostream>
#include "winec.h"

int main () {

	cout << "Enter name of wine: ";
	char lab[50];
	cin.getline(lab, 50);

	cout << "Enter number of years: ";
	int yrs;
	cin >> yrs;

	Wine holding(lab, yrs); // store label, years, give arrays yrs elements
	holding.GetBottles(); // solicit input for year, bottle count
	holding.Show(); // display object contents
	const int YRS = 3;
	int y[YRS] = {1993, 1995, 1998};
	int b[YRS] = { 48, 60, 72};

	// create new object, initialize using data in arrays y and b
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << "Total bottles for " << more.Label() // use Label() method
		<< ": " << more.sum() << endl; // use sum() method
	cout << "Bye\n";

	system("Pause");
	return 0;
}

//The Wine class has a string class object member (see Chapter 4) that holds the name of a wine and
//a Pair object (as discussed in this chapter) of valarray<int> objects (as discussed in this chapter). 
//The first member of each Pair object holds the vintage years, and the second member holds the numbers 
//of bottles owned for the corresponding particular vintage year. For example, the first valarray object 
//of the Pair object might hold the years 1988, 1992, and 1996, and the second valarray object might hold
//the bottle counts 24, 48, and 144. It may be convenient for Wine to have an int member that stores the number of years.
//The Wine class should have a method GetBottles() that, given a Wine object with y years, prompts the user to enter the 
//corresponding number of vintage years and bottle counts. A method Label() should return a reference to the wine name. 
//A method sum() should return the total number of bottles in the second valarray<int> object in the Pair object.
//The program should prompt the user to enter a wine name, the number of elements of the array, and the year and bottle
//count information for each array element. The program should use this data to construct a Wine object and then display 
//the information stored in the object.