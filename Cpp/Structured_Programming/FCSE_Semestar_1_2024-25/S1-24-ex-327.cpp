//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 11 - Pokazhuvaci

/* Константни покажувачи */

#include <iostream>
using namespace std;

int main() {
	int a = 1, b = 2, x;

	// Pokazhuvac kon konstantna memorija
	int const *cip = &a;    // cip pokazhuva kon konstantna memorija
	x = *cip;               // mozhe da ja prochita vrednosta
	cip = &b;               // cip mozhe da prenasochi kon druga lokacija
	// *cip = a;            // NE MOZHE - ova e pogreshno, bidejki cip sekogash pokazhuva kon konstantna memorija

	//Konstanten pokazhuvach kon memorija
	int * const icp = &a;   // icp e konstanten pokazhuvach kon memorija
	x = *icp;               // citanje na vrednost
	*icp = b;               // mozhe da ja smeni sodrzhinata na memorijata na koja pojazhuva
	// icp = &b;            // NE MOZHE - ova e pogreshno, bidejki ne mozhe da se posochi na druga adresa

	// Konstanten pokazhuvach kon konstantna memorija
	int const * const icp2 = &a; // nitu adresata, nitu vrednosta ne mozhat da se menuvaat

	return 0;
}