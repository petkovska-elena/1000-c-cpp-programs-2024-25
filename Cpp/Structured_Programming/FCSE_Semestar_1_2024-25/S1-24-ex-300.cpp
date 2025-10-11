//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Пример Static и Auto променливи */

#include <iostream>
using namespace std;

void demo( void );

void demo( void ) {
	auto local = 0;          // автоматски се одредува
	static int svar = 0;     // static променлива
	cout << "local = " << local << ", static = " << svar << endl;
	++local;
	++svar;
}

int main() {
	int i = 0;
	while (i < 3) {
		demo();
		i++;
	}
	return 0;
}