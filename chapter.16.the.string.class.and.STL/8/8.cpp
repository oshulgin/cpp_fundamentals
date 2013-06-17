#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	set<string> Mats_friends;
	set<string> Pats_friends;
	set<string> friends_to_invite;

	cout << "Enter Mats friends (q line to terminate):" << endl;
	string word;
	while (cin >> word && word != "q") {
		Mats_friends.insert(word);
	}

	cout << "Enter Pats friends (q line to terminate):" << endl;
	while (cin >> word && word != "q") {
		Pats_friends.insert(word);
	}

	friends_to_invite = Mats_friends;
	friends_to_invite.insert( Pats_friends.begin(), Pats_friends.end() );
	
	cout << "Friends to invite: " << endl;
	for ( set<string>::iterator iter = friends_to_invite.begin(); iter != friends_to_invite.end(); iter++ ) {
		cout << *iter << endl;
	}

	system("Pause");
	return 0;
}

//Mat and Pat want to invite their friends to a party.They ask you to write a program
//that does the following:
//n Allows Mat to enter a list of his friends’names.The names are stored in a
//container and then displayed in sorted order.
//n Allows Pat to enter a list of her friends’names.The names are stored in a sec-
//ond container and then displayed in sorted order.
//n Creates a third container that merges the two lists,eliminates duplicates,and
//displays the contents of this container.