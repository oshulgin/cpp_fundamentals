#include "absDMA.h"
#include "baseDMA.h"
#include "lackDMA.h"
#include "hasDMA.h"

const int number_of_objects = 5;

int main() {
	baseDMA *arr[number_of_objects];

	hasDMA ob1;
	hasDMA ob2;
	lackDMA ob3;
	lackDMA ob4;
	baseDMA ob5;

	arr[0] = new baseDMA();
	arr[1] = new hasDMA();
	arr[2] = new hasDMA("Label #2", "Style #2", 22);
	arr[3] = new lackDMA();
	arr[4] = new lackDMA("Label #4", "Color #4" ,44);

	for ( int i = 0; i < number_of_objects; i++ ) {
		arr[i]->view();
		cout << endl;
	}

	system("Pause");
	return 0;
}
//Revise the base DMA-lacks DMA-has DMAclass hierarchy so that all three classes are
//derived from an ABC.Test the result with a program similar to the one in Listing
//13.10.That is,it should feature an array of pointers to the ABC and allow the user
//to make runtime decisions as to what types of objects are created. Add virtual
//View()methods to the class definitions to handle displaying the data.