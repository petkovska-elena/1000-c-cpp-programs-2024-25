// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 5

#include <iostream>
using namespace std;

int main() {
    double broj1, broj2, rezultat;
    char op;

    cout << "Vnesete dva broja i operator (pr. 5 + 3): ";
    cin >> broj1 >> op >> broj2;

    switch (op) {
    case '+':
        rezultat = broj1 + broj2;
        break;

    case '-':
        rezultat = broj1 - broj2;
        break;

    case '*':
        rezultat = broj1 * broj2;
        break;

    case '/':
        if (broj2 != 0) {
            rezultat = broj1 / broj2;
        } else {
            cout << "Delenje so 0 ne e dozvoleno." << endl;
            return 1;
        }
        break;

    default:
        cout << "Nepozanat operator." << endl;
        return 1;
    }

    cout << broj1 << ' ' << op << ' ' << broj2 << " = " << rezultat << endl;

    return 0;
}
