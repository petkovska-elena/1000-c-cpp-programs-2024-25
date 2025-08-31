//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 1 - 23/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int broj;
    cout << "Zdravo! Vnesi petcifren broj: ";
    cin >> broj;

    int leva_strana = broj / 10000;
    int desna_strana = broj % 10;

    int iskastren = (broj / 10) % 1000;

    int sum = leva_strana + desna_strana;

    cout << "Iskastreniot broj e: " << iskastren << endl;
    cout << "Zbirot na otstranetite cifri e: " << sum << endl;

    return 0;
}


