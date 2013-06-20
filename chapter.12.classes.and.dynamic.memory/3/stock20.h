#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>
using namespace std;

class Stock {
private:
    char* company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock(const char* co, long n = 0, double pr = 0.0);
    ~Stock();       // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    const Stock & topval(const Stock & s) const;

	char* getCompany() const;
	int getShares() const;
	double getShare_val() const;
	double getTotal_val() const;
};

ostream& operator<< (ostream& out, const Stock& s);

#endif
