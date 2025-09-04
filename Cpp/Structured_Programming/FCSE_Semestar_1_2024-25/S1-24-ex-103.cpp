// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

#include <iostream>
using namespace std;

int main() {
    char ch;
    int zbir = 0;

    while (cin >> noskipws >> ch)
    {
        if (ch == '!') break;
        if (ch >= '0' && ch <= '9')
        {
            int broj = ch - '0';
            while (cin >> noskipws >> ch && ch >= '0' && ch <= '9')
            {
                broj = broj * 10 + ch - '0';
            }
            if (broj < 100) zbir = zbir + broj;
        }
    }
    cout << zbir;
    return 0;
}
