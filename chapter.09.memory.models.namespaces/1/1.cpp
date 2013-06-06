#include <iostream>
#include "golf.h"

using namespace std;

const int arr_size = 3;
int main() {
	golf vasya;
	golf golf_arr[arr_size];

	setgolf(vasya, "Vasya Petya", 10);
	showgolf(vasya);

	for ( int i = 0; i < arr_size; i++ ) {
		if ( setgolf(golf_arr[i]) ) { break; }
		handicap(golf_arr[i]);
	};

	handicap(golf_arr[1], 100);

	showgolf(golf_arr[0]);
	showgolf(golf_arr[1]);
	showgolf(golf_arr[2]);

	system("Pause");
	return 0;
}

//Notethat setgolf() is overloaded. Using the first version of setgolf() would
//look like this:
//golf ann;
//setgolf(ann, "Ann Birdfree", 24);

//The function call provides the information that’s stored in the ann structure. Using
//the second version of setgolf() would look like this:
//golf andy;
//setgolf(andy);

//The function would prompt the user to enter the name and handicap and store
//them in the andystructure.This function could (but doesn’t need to) use the first
//version internally.

//Put together a multifile program based on this header.One file,named golf.cpp,
//should provide suitable function definitions to match the prototypes in the header
//file. A second file should contain main()and demonstrate all the features of the
//prototyped functions.For example,a loop should solicit input for an array of golf
//structures and terminate when the array is full or the user enters an empty string
//for the golfer’s name.The main()function should use only the prototyped func-
//tions to access the golf structures.