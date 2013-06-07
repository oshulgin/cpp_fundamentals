#include "account.h"

Account::Account(const string &n, const string num, double b) {
	name = n;
	number = num;
	balance = b;
}
Account::Account() {
	name = "No name";
	number = "No munber";
	balance = 0;
}
void Account::show_account() const {
	cout << "Name: " << name << endl;
	cout << "Number: " << number << endl;
	cout << "Balance: " << balance << endl;
	}
void Account::add_money(double money) {
	balance += money;
}
void Account::reduce_money(double money) {
	balance -= money;
}