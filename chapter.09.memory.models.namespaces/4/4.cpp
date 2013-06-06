#include <iostream>
#include "namespace.h"

using namespace std;
using namespace SALES;

int main() {
	Sales sales2012;
	Sales sales2013;

	double arr[] = { 1.2, 2.3, 3.4, 4.5 };
	setSales(sales2012);

	setSales(sales2013, arr, 4);

	showSales(sales2012);
	showSales(sales2013);

	system("Pause");
	return 0;
}

//The first file should be a header file that contains the namespace.The second file
//should be a source code file that extends the namespace to provide definitions for
//the three prototyped functions. The third file should declare two Sales objects. It
//should use the interactive version of setSales()to provide values for one structure
//and the non-interactive version of setSales()to provide values for the second
//structure. It should display the contents of both structures by using
//showSales().