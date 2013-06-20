#include <iostream>
#include "stock20.h"
using namespace std;

Stock::Stock(const char* co, long n, double pr)
{
	int len = strlen(co);
    company = new char[len + 1];
	strcpy(company, co);
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                   << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()       
{
}

void Stock::buy(long num, double price)
{
     if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this; 
}

char* Stock::getCompany() const {
	return company;
}

int Stock::getShares() const {
	return shares;
}

double Stock::getShare_val() const {
	return share_val;
}

double Stock::getTotal_val() const {
	return total_val;
}

ostream& operator<< (ostream& out, const Stock& s) {
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = 
        cout.setf(ios_base::fixed, ios_base::floatfield); 
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << s.getCompany() << "  Shares: " << s.getShares() << '\n';
    cout << "  Share Price: $" << s.getShare_val();

    cout.precision(2);
    cout << "  Total Worth: $" << s.getTotal_val() << '\n';

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);

	return out;
}
