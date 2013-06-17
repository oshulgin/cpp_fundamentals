#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int LIMIT = 100000;

int main() {
	vector<int> vi0;
	srand(time(0));

	for ( int i = 0; i < LIMIT; i++ ) {
		vi0.push_back(rand() % 1000 + 1);
	}

	vector<int> vi(vi0.begin(), vi0.end()); 
	list<int> li(vi0.begin(), vi0.end()); 

	clock_t start = clock();
	sort(vi.begin(), vi.end());
	clock_t end = clock();
	cout << "Sorting time for vector: ";
	cout << (double)(end - start)/CLOCKS_PER_SEC << endl;

	start = clock();
	li.sort();
	end = clock();
	cout << "Sorting time for list: ";
	cout << (double)(end - start)/CLOCKS_PER_SEC << endl;

	cout << "Copying li to vi, sorting vi and copying vi back to li." << endl;
	start = clock();
	li.assign(vi0.begin(), vi0.end()); 
	vi.assign(li.begin(), li.end());
	sort(vi.begin(), vi.end());
	li.assign(vi.begin(), vi.end());
	end = clock();
	cout << "Sorting time for list: ";
	cout << (double)(end - start)/CLOCKS_PER_SEC << endl;

	system("Pause");
	return 0;
}

//processtime = std::rand() % 3 + 1;
//clock_t start = clock();
//clock_t end = clock();
//cout << (double)(end - start)/CLOCKS_PER_SEC;

//Compared to an array,a linked list features easier addition and removal of elements
//but is slower to sort.This raises a possibility:Perhaps it might be faster to copy a list
//to an array,sort the array,and copy the sorted result back to the list than to simply
//use the list algorithm for sorting.(But it also could use more memory.) Test the
//speed hypothesis with the following approach:
//a. Create a large vector<int>objectvi0,using rand()to provide initial 
//values.
//b. Create a second vector<int>objectviand a list<int>objectliof the
//same size as the original and initialize them to values in the original vector.
//c. Time how long the program takes to sort viusing the STL sort()algo-
//rithm,then time how long it takes to sort liusing the list sort()method.
//d. Reset lito the unsorted contents of vi0.Time the combined operation of
//copying litovi,sorting vi,and copying the result back to li.
//To time these operations,you can use clock()from the ctimelibrary. As in Listing
//5.14,you can use this statement to start the first timing:
//clock_t start = clock();
//Then use the following at the end of the operation to get the elapsed time:
//clock_t end = clock();
//cout << (double)(end - start)/CLOCKS_PER_SEC;
//This is by no means a definitive test because the results will depend on a variety of
//factors,including available memory,whether multiprocessing is going on,and the
//size of the array or list.(One would expect the relative efficiency advantage of the
//array over the list to increase with the number of elements being sorted.) Also if
//you have a choice between a default build and a release build,use the release build
//for the measurement.With today’s speedy computers,you probably will need to use
//as large an array as possible to get meaningful readings.You might try,for example,
//100,000 elements,1,000,000 elements,and 10,000,000 elements.