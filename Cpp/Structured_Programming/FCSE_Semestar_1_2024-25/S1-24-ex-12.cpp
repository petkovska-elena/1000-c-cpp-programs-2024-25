//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма каде од тастатура ќе се внесе трицифрен цел број.
 * Програмата ќе ја испечати најзначајната и најмалку значајната цифра од бројот
 * Пример: Ако се внесе бројот 795, програмата ќе испечати: Najznacajna cifra e 7, a najmalku znacajna e 5.
 * ПОМОШ: Искористете целобројно делење и остаток од делење. */

#include <iostream>
using namespace std;

int main()
{
    int broj;

    while (true)
    {
        cout << "Vnesete pozitiven tricifren broj: ";
        cin >> broj;

        if (broj >= 100 && broj <= 999)
        {
            cout << "Najznachajnata cifra na brojot e: " << broj / 100 << endl;
            cout << "Najmalku znachajnata cifra na brojot e: " << broj % 10 << endl;
            return 0;
        }

        else
        {
            cout << "Vneseniot broj more da bide tricifren. Obidete se povtorno!" << endl;
        }
    }

    return 0;
}



/*
//Basic Solution
#include <iostream>
using namespace std;

int main()
{
    int broj;
    cout << "Vnesete go tricifreniot broj: " << endl;
    cin >> broj;
    cout << "Znachi, najznachajnata cifra kaj ovoj broj e: " << (broj / 100) << ". ";
    cout << "A, najmalku znachajnata cifra e: " << (broj % 10);
    return 0;
} */