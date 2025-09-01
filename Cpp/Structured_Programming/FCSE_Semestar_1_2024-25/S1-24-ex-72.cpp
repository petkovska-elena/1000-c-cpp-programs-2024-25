//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 1 - 23/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int reden_broj, vkupno_vreme, casovi, minuti;
    cin >> reden_broj;

    vkupno_vreme = reden_broj * 5;

    if (vkupno_vreme > 120)
    {
        vkupno_vreme += 30;
    }

    if (vkupno_vreme > 210)
    {
        vkupno_vreme += 30;
    }

    if (vkupno_vreme >= 360)
    {
        cout << "Studentot ne e voopshto usluzhen" << endl;
    }

    else
    {
        casovi = vkupno_vreme / 60;
        minuti = vkupno_vreme % 60;
        cout << "Casovi: " << casovi << ", minuti: " << minuti << endl;
    }

    return 0;
}
