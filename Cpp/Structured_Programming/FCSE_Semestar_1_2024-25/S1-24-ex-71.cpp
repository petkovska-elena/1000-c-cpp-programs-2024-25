//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 1 - 23/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int broj1, broj2;
    float minuti;

    cout << "Zdravo! Vnesi go prviot broj, vtoriot broj i vremetraenjeto na razgovorot vo mimuti: ";
    cin >> broj1 >> broj2 >> minuti;

    int operator1 = broj1 /  1000000;
    int operator2 = broj2 /  1000000;

    int cena;
    if (minuti <= 30)
    {
        cena = minuti * 3;
    }
    else
    {
        cena = 30 * 3 + (minuti - 30) * 2;
    }

    bool ist_operator = ((operator1 == 71 || operator1 == 72 || operator1 == 73) && (operator2 == 71 || operator2 == 72 || operator2 == 73)) ||
                        ((operator1 == 74 || operator1 == 75 || operator1 == 76) && (operator2 == 74 || operator2 == 75 || operator2 == 76));

    if (ist_operator)
    {
        float popust = cena * 0.30;
        float finalna_cena = cena - popust;
        cout << "Vkupna cena so popust " << finalna_cena << " denari" << endl;
    }
    else
    {
        cout << "Vkupna cena bez popust " << cena << " denari" << endl;
    }

    return 0;
}