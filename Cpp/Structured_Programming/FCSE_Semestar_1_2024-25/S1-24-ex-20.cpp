//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 2 (16.10.2024) */

/* Да се напише програма за пресметување на возраста на едно куче во човечки години.
 * Кучешката возраст се чита од стандарден влез.
 * Доколку се внесе негативен број за возраста, да се испечати следната порака:
 * “Vozrasta mora da bide pozitiven broj”.
 * Забелешка: За првите две години, една кучешка година е еднаква на 10,5 човечки години.
 * После тоа, секоја кучешка година е еднаква на 4 човечки години. */

#include <iostream>
using namespace std;

int main()
{
    int kucheska_vozrast, chovechka_vozrast;

    while (true)
    {
        cout << "Vnesete ja vozrasta na kucheto: ";
        cin >> kucheska_vozrast;

        if (kucheska_vozrast < 0)
        {
            cout << "Vozrasta mora da bide pozitiven broj. Vnesete povtorno: " << endl;
        }
        else
        {
            if (kucheska_vozrast <= 2)
            {
                chovechka_vozrast = 2 * 10.5;
            }
            else
            {
                chovechka_vozrast = 2 * 10.5 + (kucheska_vozrast - 2) * 4;
            }

            cout << "Vozrasta na kuchete pretvorena vo chovechki godini e " << chovechka_vozrast << endl;
            return 0;
        }
    }

    return 0;
}