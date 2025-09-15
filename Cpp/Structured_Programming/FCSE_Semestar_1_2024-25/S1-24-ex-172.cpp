// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 3

#include <iostream>
using namespace std;

int main() {
    int kucheska_vozrast, chovechka_vozrast;

    cout << "Vnesete kucheshka vozrast: ";
    cin >> kucheska_vozrast;

    if (kucheska_vozrast < 0) {
        cout << "Vozrasta mora da bide pozitiven broj" << endl;
    } else {
        if (kucheska_vozrast <= 2) {
            chovechka_vozrast = kucheska_vozrast * 10.5;
        } else {
            chovechka_vozrast = 2 * 10.5 + (kucheska_vozrast - 2) * 4;
        }

        cout << "Chovecheska vozrast na kucheto e: " << chovechka_vozrast << endl;
    }

    return 0;
}
