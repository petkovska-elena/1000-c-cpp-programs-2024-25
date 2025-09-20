// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 5

#include <iostream>
using namespace std;

int main() {
    int vrednost, izbor;
    cout << "Vnesete pocetna vrednost: ";
    cin >> vrednost;

    do {
        do {
            cout << "Meni:" << endl;
            cout << "1 - Zgolemi" << endl;
            cout << "2 - Namali" << endl;
            cout << "3 - Dupliraj" << endl;
            cout << "0 - Kraj" << endl;
            cout << "Izberi: ";
            cin >> izbor;
        } while (izbor < 0 || izbor > 3);

        switch (izbor) {
        case 1:
            vrednost++;
            break;
        case 2:
            vrednost--;
            break;
        case 3:
            vrednost *= 2;
            break;
        case 0:
            cout << "Kraj" << endl;
            break;
        default:
            cout << "Nevaliden izbor!" << endl;
            break;
        }

        cout << "Vrednost = " << vrednost << endl;
        cout << endl;
    } while (izbor != 0);

    return 0;
}
