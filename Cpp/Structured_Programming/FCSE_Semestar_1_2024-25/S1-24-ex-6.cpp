//
// Created by Elena Petkovska on 30.5.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма која ќе ги отпечати на екран остатоците при делењето на бројот 19 со 2, 3, 5 и 8. */

#include <iostream>
using namespace std;

int main()
{
    int a = 19;

    cout << "Rabotime so brojot a = 19" << endl;
    cout << "Ostatokot pri delenje na " << a << " so 2 e: " << a % 2 << endl;
    cout << "Ostatokot pri delenje na " << a << " so 3 e: " << a % 3 << endl;
    cout << "Ostatokot pri delenje na " << a << " so 5 e: " << a % 5 << endl;
    cout << "Ostatokot pri delenje na " << a << " so 8 e: " << a % 8 << endl;

    return 0;
}

