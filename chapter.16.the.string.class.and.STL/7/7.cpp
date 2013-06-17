#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Lotto(int spots, int numbers);

int main() {
	int spots;
	int numbers;

	cout << "Enter a number of spots: ";
	cin >> spots;

	cout << "Enter a number choose: ";
	cin >> numbers;

	vector<int> winners = Lotto(spots, numbers);
	for (vector<int>::iterator iter = winners.begin(); iter < winners.end(); iter++ ) {
		cout << *iter << ' ';
	}
	cout << endl;

	system("Pause");
	return 0;
}

vector<int> Lotto(int general_numbers, int numbers) {
	vector<int> ticket;
	for (int i = 1; i <= general_numbers; i++) {
		ticket.push_back(i);
	}
	random_shuffle(ticket.begin(), ticket.end());
	vector<int> winners(ticket.begin(), ticket.begin() + numbers);
	return winners;
}

//A common game is the lottery card.The card has numbered spots of which a cer-
//tain number are selected at random.Write a Lotto()function that takes two argu-
//ments.The first should be the number of spots on a lottery card,and the second
//should be the number of spots selected at random.The function should return a
//vector<int>object that contains,in sorted order,the numbers selected at random.
//For example,you could use the function as follows:
//vector<int> winners;
//winners = Lotto(51,6);
//This would assign to winnersa vector that contains six numbers selected randomly
//from the range 1 through 51.Note that simply using rand()doesn’t quite do the
//job because it may produce duplicate values.Suggestion:Have the function create a
//vector that contains all the possible values,use random_shuffle(),and then use the
//beginning of the shuffled vector to obtain the values. Also write a short program
//that lets you test the function.