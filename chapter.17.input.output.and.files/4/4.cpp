#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

const int LIMIT = 100;
int main() {
	ofstream out;
	ifstream in1;
	ifstream in2;
	char line1[100];
	char line2[100];
	vector<string> line1_vector;
	vector<string> line2_vector;

	out.open("out.txt");
	in1.open("in1.txt");
	in2.open("in2.txt");

	if ( !in1.is_open() || !in1.is_open() ) { 
		cerr << "Could not open source file" << endl; 
	}
	
	while ( in1.getline(line1, LIMIT) ) {
		line1_vector.push_back(line1);
	}

	while ( in2.getline(line2, LIMIT) ) {
		line2_vector.push_back(line2);
	}

	vector<string>::iterator it1 = line1_vector.begin();
	vector<string>::iterator it2 = line2_vector.begin();

	for ( ; it1 != line1_vector.end() && it2 != line2_vector.end(); it1++, it2++ ) {
		out << (*it1) << ' ' << (*it2) << endl;
	}

	if ( it1 == line1_vector.end() ) {
		for ( ; it2 != line2_vector.end(); it2++ ) {
			out << *it2 << endl;
		}
	}

	if ( it2 == line2_vector.end() ) {
		for ( ; it1 != line1_vector.end(); it1++ ) {
			out << *it1 << endl;
		}
	}
	cout << line1_vector.size() << endl;
	cout << line2_vector.size() << endl;

	out.close();
	in1.close();
	in2.close();
	system("Pause");
	return 0;
}


//Write a program that opens two text files for input and one for output.The pro-
//gram should concatenate the corresponding lines of the input files,use a space as a
//separator,and write the results to the output file.If one file is shorter than the other,
//the remaining lines in the longer file should also be copied to the output file.For
//example,suppose the first input file has these contents:
//eggs kites donuts
//balloons hammers
//stones
//And suppose the second input file has these contents:
//zero lassitude
//finance drama
//The resulting file would have these contents:
//eggs kites donuts zero lassitude
//balloons hammers finance drama
//stones