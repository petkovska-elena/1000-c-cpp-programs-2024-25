//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 2 (16.10.2024) */

/* Да се напише програма со која ќе се отпечати максимумот од два броја чии вредности се читаат од тастатура. */

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Vnesete gi dvata broja: " << endl;;
    cin >> a >> b;

    if (a > b) { cout << "Maksimumot e " << a; }
    else { cout << "Maksimumot e " << b; }

    return 0;
}



