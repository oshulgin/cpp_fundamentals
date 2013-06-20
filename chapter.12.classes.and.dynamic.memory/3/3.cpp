#include <iostream>
#include "stock20.h"

const int STKS = 4;
int main() {
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
        };

    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        std::cout << stocks[st] << std::endl;

    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);

    std::cout << "\nMost valuable holding:\n";
	std::cout << *top << std::endl;

	system("Pause");
    return 0; 
}

//Rewrite the Stockclass,as described in Listings 10.7and 10.8in Chapter 10 so
//that it uses dynamically allocated memory directly instead of using stringclass
//objects to hold the stock names. Also replace the show()member function with an
//overloaded operator<<()definition.Test the new definition program in Listing
//10.9.