//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Локални променливи декларирани како Static */

#include <iostream>
using namespace std;

int main() {
	int counter; /* brojac */
	for (counter = 0; counter < 3; ++counter) {
		int temporary = 1;      /* привремена променлива */
		static int permanent = 1; /* перманентна променлива */

		cout << "Temporary " << temporary
			 << " Permanent " << permanent << endl;

		++temporary;
		++permanent;
	}
	return 0;
}