#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

int main() {
	set<string> Mats_friends;
	set<string> Pats_friends;
	set<string> friends_to_invite;
	ofstream out;
	ifstream mat;
	ifstream pat;

	out.open("out.dat");
	mat.open("mat.dat");
	pat.open("pat.dat");

	if ( !mat.is_open() || !pat.is_open() ) { 
		cerr << "Could not open source file" << endl; 
	}

	string word;
	while (mat >> word) {
		Mats_friends.insert(word);
	}

	while (pat >> word) {
		Pats_friends.insert(word);
	}

	friends_to_invite = Mats_friends;
	friends_to_invite.insert( Pats_friends.begin(), Pats_friends.end() );
	
	out << "Friends to invite: " << endl;
	for ( set<string>::iterator iter = friends_to_invite.begin(); iter != friends_to_invite.end(); iter++ ) {
		out << *iter << endl;
	}

	out.close();
	mat.close();
	pat.close();
	system("Pause");
	return 0;
}

//Mat and Pat want to invite their friends to a party,much as they did in Program-
//ming Exercise 8 in Chapter 16,except now they want a program that uses files.
//They have asked you to write a program that does the following:
//n Readsalist ofMat’sfriends’namesfromatextfilecalledmat.dat,whichlists
//onefriendperline.The namesarestoredinacontainerandthendisplayedin
//sortedorder.
//n Readsalist of Pat’s friends’ names from at extfilecalledpat.dat, which lists
//onefriendperline.The namesarestoredinacontainerandthendisplayedin
//sortedorder.
//n Merges the two lists,eliminating duplicates and stores the result in the file
//matnpat.dat,one friend per line.