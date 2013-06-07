#include "account.h"

int main() {
	Account a1("Petya", "123123", 999.9);
	Account a2;


	a1.show_account();
	a2.show_account();

	a2.add_money(777.77);
	a2.show_account();

	system("Pause");
	return 0;
}