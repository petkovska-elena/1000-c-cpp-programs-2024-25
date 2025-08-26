//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 2 (16.10.2024) */

/* Да се промени претходната програма, така што покрај оценките ќе се испечатат
 * и знаците + и – во зависност од вредноста на последната цифра на поените:
 * За оценката 5 не треба да се додава + или –, а за оценката 10 не треба да се додава знакот +. */

#include <iostream>
using namespace std;

int main()
{
    int poeni = 0;
    int ocenka = 0;

    cout << "Vnesete broj na osvoeni poeni: ";
    cin >> poeni;

    if (poeni >= 0 && poeni <= 50) ocenka = 5;
    else if (poeni >= 51 && poeni <= 60) ocenka = 6;
    else if (poeni >= 61 && poeni <= 70) ocenka = 7;
    else if (poeni >= 71 && poeni <= 80) ocenka = 8;
    else if (poeni >= 81 && poeni <= 90) ocenka = 9;
    else if (poeni >= 91 && poeni <= 100) ocenka = 10;

    else
    {
        cout << "Vnesena e nevalidna vrednost na poeni!";
        return 1;
    }

    cout << "Dobienata ocenka e: " << ocenka << endl;

    char znak;
    int procent = poeni % 10;

    if (ocenka != 5)
    {
        if (procent >= 1 & procent <= 3) znak = '-';
        else if (ocenka != 10 && (procent >= 8 || procent == 0)) znak = '+';
    }

    cout << "Ocenka: " << ocenka << znak << endl;

    return 0;
}

