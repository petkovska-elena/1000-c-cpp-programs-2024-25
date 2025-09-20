// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 5

#include <iostream>
using namespace std;

int main() {
    char odgovor;
    cout << "Dali SP e lesen predmet? (d/n): " << endl;
    cin >> odgovor;

    switch (odgovor) {
    case 'D':
    case 'd':
      cout << "I jas mislam taka!" << endl;
        break;

    case 'N':
    case 'n':
      cout << "Navistina?" << endl;
        break;

    default:
        cout << "Ova e DA ili NE?" << endl;
    }

    return 0;
}
