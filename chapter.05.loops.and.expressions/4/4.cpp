#include <iostream>
using namespace std;

int main() {
	double daphne = 100;
	double cleo = 100;
	int year;

	for ( year = 1; cleo <= daphne; year++ ) {
		daphne += 10;
		cleo += cleo * 0.05;
	}
	cout << "At year " << year - 1 << " Cleo has " << cleo << "$ and Daphne has " << daphne << "$." << endl;

	cin.get();
	return 0;
}

//Daphne invests $100 at 10% simple interest.That is,every year,the investment earns
//10% of the original investment,or $10 each and every year:
//interest = 0.10 x original balance
//At the same time,Cleo invests $100 at 5% compound interest.That is,interest is 5%
//of the current balance,including previous additions of interest:
//interest = 0.05 x current balance
//Cleo earns 5% of $100 the first year,giving her $105.The next year she earns 5% of
//$105,or $5.25,and so on.
//Write a program that finds how many years it takes for
//the value of Cleo’s investment to exceed the value of Daphne’s investment and then
//displays the value of both investments at that time.