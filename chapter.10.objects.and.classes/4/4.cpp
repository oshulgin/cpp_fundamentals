#include <iostream>
#include "sales.h"

using namespace std;
using namespace SALES;

int main() {
	double arr[] = { 1.2, 2.3, 3.4, 4.5 };
	Sales sales2012;
	Sales sales2013(arr, 4);

	sales2012.showSales();
	sales2013.showSales();

	system("Pause");
	return 0;
}

//Do Exercise 4 from Chapter 9but convert the Salesstructure and
//its associated functions to a class and its methods.Replace the setSales(Sales &,
//double [], int)function with a constructor.Implement the interactive
//setSales(Sales &)method by using the constructor.Keep the class within the
//namespace SALES.

//The first file should be a header file that contains the namespace.The second file
//should be a source code file that extends the namespace to provide definitions for
//the three prototyped functions. The third file should declare two Sales objects. It
//should use the interactive version of setSales()to provide values for one structure
//and the non-interactive version of setSales()to provide values for the second
//structure. It should display the contents of both structures by using
//showSales().