//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 8 - Nizi

/* Да се напише програма која ќе формира хистограм со ѕвезди врз основа на вредностите во една низа. */

#include <iostream>
#include <iomanip>
using namespace std;

#define SIZE 10

int main() {
	int n[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
	int i, j;

	cout << "Element" << setw(13) << "Value" << "\t\t"
		 << setw(19) << left << "Histogram" << endl;

	for(i = 0; i < SIZE; ++i){
		cout << right;
		cout << setw(7) << i << setw(13) << n[i] << "\t\t";
		for (j = 1; j <= n[i]; j++)
			cout << '*';
		cout << endl;
	}

	return 0;
}
