//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма каде од тастатура ќе се внесе датумот на раѓање во формат (ddmmgggg).
 * Програмата на компјутерскиот екран ќе го испечати денот и месецот на раѓање.
 * Пример: Ако се внесе следниот број: 18091992, програмата ќе испечати: 18.9
 * ПОМОШ: Искористете целобројно делење и остаток од делење. */

#include <iostream>
using namespace std;

int main()
{
    int datum;
    int den, mesec, godina;

    cout << "Vnesete go datumot na ragjanje vo format ddmmgggg: ";
    cin >> datum;

    cout << "Super, eve go datumot na ragjanje uredno zapishan: ";

    den = datum / 1000000;
    mesec = (datum / 10000) % 10;
    godina = datum % 10000;

    cout << den << ". " << mesec << ". " << godina << endl;

    return 0;
}



/*
#include <iostream>
using namespace std;

int main()
{
    cout << "Vnesi go datumot na ragjanje (format: ddmmgggg): " << endl;
    long int datum;
    int den;
    int mesec;
    int godina;
    cin >> datum;
    cout << "Super, eve gi denot i mesecot na ragjanje, zaedno so godinata: ";
    den = datum / 1000000;
    mesec = (datum / 10000) % 10;
    godina = datum % 10000;
    cout << den << "." << mesec << "." << godina << endl;
} */