#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account {
private:
	string name;
	string number;
	double balance;

public:
	Account();
	Account(const string &n, const string num, double b);
	void show_account() const;
	void add_money(double money);
	void reduce_money(double money);
};

#endif