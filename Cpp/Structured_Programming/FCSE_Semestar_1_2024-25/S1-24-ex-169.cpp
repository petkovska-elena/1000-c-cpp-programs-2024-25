// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezbi 3

#include <iostream>
using namespace std;

int main () {
    int poeni, ocena = 0;
    cout<<"Vnesi poeni: "<<endl;
    cin>>poeni;

    if (poeni < 0 || poeni > 100)
    {
        cout << "Batko ne biva ova kaj go najde" << endl;
    } else {
        if (poeni > 90) ocena = 10;
        else if (poeni > 80) ocena = 9;
        else if (poeni > 70) ocena = 8;
        else if (poeni > 60) ocena = 7;
        else if (poeni > 50) ocena = 6;
        else ocena = 5;

        char znak = ' ';
        int pc = poeni % 10;

        if (ocena != 5) {
            if (pc >= 1 && pc <= 3) znak = '-';
            else if (ocena != 10 && (pc >= 8 || pc == 0))
                znak = '+';
        }

        cout<<"Ocena: "<<ocena<<znak<<endl;
    }
    return 0;
}
