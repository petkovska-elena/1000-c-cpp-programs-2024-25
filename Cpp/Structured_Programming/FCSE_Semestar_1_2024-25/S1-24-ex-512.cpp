//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Koristenje na chlenovi na strukturi i operacii so pokazhuvachi kon strukturi */

#include <iostream>
#include <cstring>
using namespace std;

struct Karta
{
	char brojka[20];       // pokazhuvach brojka
	char boja[20];         // pokazhuvach boja
};

int main() {
	struct Karta aCard;    // Promenliva od strukturata karta
	struct Karta *cardPtr; // Pokazhuvach kon strukturata karta

	strcpy (aCard.brojka, "As");
	strcpy (aCard.boja, "Detelina");

	cardPtr = &aCard;      // Dodeli i adresa na aCard ba cardPtr

	cout << aCard.brojka << " " << aCard.boja << " "
		 << cardPtr -> brojka << " " << cardPtr -> boja << " "
		 << (*cardPtr).brojka << " " << (*cardPtr).boja;

	return 0;
}
