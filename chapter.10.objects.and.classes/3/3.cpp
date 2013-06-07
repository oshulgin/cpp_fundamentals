#include "golf.h"

const int arr_size = 3;

int main() {
	Golf vasya("Vasya Petya", 10);
	Golf golf_arr[arr_size];

	vasya.showgolf();

	for ( int i = 0; i < arr_size; i++ ) {
		golf_arr[i].setgolf();
	};

	golf_arr[1].set_handicap(100);

	for ( int i = 0; i < arr_size; i++ ) {
		golf_arr[i].showgolf();
	}

	system("Pause");
	return 0;
}