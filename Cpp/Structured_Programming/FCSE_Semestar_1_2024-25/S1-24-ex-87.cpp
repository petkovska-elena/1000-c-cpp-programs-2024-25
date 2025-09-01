//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

int main() {
    char ch;
    int zbir = 0;

    while (cin >> noskipws >> ch) {
        int broj = 0;

        if (ch >= '0' && ch <= '9') {
            broj = ch - '0';

            while (cin >> noskipws >> ch && ch >= '0' && ch <= '9') {
                broj = broj * 10 + (ch - '0');
            }

            if (broj < 100) {
                zbir += broj;
            }
        }
    }

    cout << zbir << endl;
    return 0;
}