//
// Created by Elena Petkovska on 14.8.25.
//

// Приказ на текстуални низи
// Забелешка:
// setw() не дозволува помалку од должината на низата, но може повеќе места.

#include <iostream>
#include <iomanip>  // за setw
#include <cstdio>   // за puts()
using namespace std;

int main() {
	// Primer so puts()
	char string1[] = "Hello";
	puts(string1);             //Dodava nov red po nizata

	// Primer so cout
	const int N = 20;
	char string2[N];

	cout << "Enter your name: ";
	cin.getline(string2, N);

	cout << string2 << endl;
	cout << setw(15) << string2 << endl;
	cout << setw(30) << string2 << endl;

	return 0;
}