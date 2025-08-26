//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 2 (16.10.2024) */

/* Да се напише програма што за внесен број на поени од испит
 * ќе генерира соодветна оценка според следната табела: */

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

    else cout << "Vnesena e nevalidna vrednost na poeni!";
    cout << "Dobienata ocenka e: " << ocenka << endl;

    return 0;
}
