#include <iostream>
#include <iomanip>
using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main() {
	double total, choices;
	double s_total, s_choices;

	cout << "Enter the total number of choices and the number\n"
			"of picks allowed on the both game cards: \n";

	while ((cin >> total >> choices >> s_total >> s_choices) && choices <= total && s_choices <= s_total) {
		cout << "You have one chance in ";
		cout << setprecision(20) << probability(total, choices) * probability(s_total, s_choices);

		cout << " of winning.\n";
		cout << "Next four numbers (q to quit): ";
	}

	cout << "bye\n";

	system("Pause");
	return 0;
}

long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
	result = result * n / p ;
	return result;
}

//Many state lotteries use a variation of the simple lottery portrayed by Listing7.4. In
//these variations you choose several numbers from one set and call them the field
//numbers .For example, you might select five numbers from the field of 1–47).You
//also pick a single number (called a meganumber or a powerball, etc.) from a sec-
//ond range, such as 1–27.To win the grand prize, you have to guess all the picks cor-
//rectly. The chance of winning is the product of the probability of picking all the
//field numbers times the probability of picking the meganumber. For instance, the probability of winning the example described here is the product of the probability
//of picking 5 out of 47 correctly times the probability of picking 1 out of 27cor-
//rectly. Modify Listing 7.4 to calculate the probability of winning this kind of lottery.