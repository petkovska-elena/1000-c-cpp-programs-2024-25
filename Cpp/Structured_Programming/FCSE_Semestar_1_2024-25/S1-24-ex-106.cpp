// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

//se formira kvadrat dolzina m, m>2
//% @ @ @ @ @ @ %
//% . . . . . . %
//% . . . . . . %
//% . . . . . . %
//% . . . . . . %
//% @ @ @ @ @ @ %

#include <iostream>
using namespace std;

int main() {
    int dolzhina;
    cin >> dolzhina;

    for (int i = 0; i < dolzhina; i++)
    {
        for (int j = 0; j < dolzhina; j++)
        {
            if (j == 0 || j == dolzhina - 1) { cout << "%"; }
              else if ((i == 0 && j > 0 && j < dolzhina) || (i == dolzhina - 1 && j < dolzhina)) { cout << " @ "; } //znaci za ramkata na kvadratot
              else { cout << " . "; } //vnatreshnost na kvadratot
        }
        cout << endl;
    }
    return 0;
}