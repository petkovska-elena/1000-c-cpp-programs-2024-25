//
// Created by Elena Petkovska on 8.4.25.
//

/* Prezentacii Predavanja */

/* Opagjacka-rastecka niza na broevi */

#include <iostream>
using namespace std;

void niza(int n)
{
    if (n > 0)
    {
        cout << n;
        niza (n -1);
        cout << n;
    }
}

int main()
{
    int n;
    cin >> n;
    niza (n);
}