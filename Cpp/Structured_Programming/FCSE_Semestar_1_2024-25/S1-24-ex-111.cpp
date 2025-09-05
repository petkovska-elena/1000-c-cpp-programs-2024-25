// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

//se citaat nepoznat broj poz celi broevi so max 5 cifri
//poz od desno nalevo na prvo pojavuvanje na najgolema cifra
//statistika

#include <iostream>
using namespace std;

int main() {
    int n;
    int pos0 = 0, pos1 = 0, pos2 = 0, pos3 = 0, pos4 = 0;

    while (cin >> n) {
        int max = 0;
        int pos = 0;
        int i = 0;

        while (n > 0) {
            int cifra = n % 10;
            if (cifra > max) {
                max = cifra;
                pos = i;
            }
            i++;
            n/=10;
        }

        if (pos == 0) pos0++;
        if (pos == 1) pos1++;
        if (pos == 2) pos2++;
        if (pos == 3) pos3++;
        if (pos == 4) pos4++;

        if (n == -1) break;
    }

    cout << 0 << ": " << pos0 << endl;
    cout << 1 << ": " << pos1 << endl;
    cout << 2 << ": " << pos2 << endl;
    cout << 3 << ": " << pos3 << endl;
    cout << 4 << ": " << pos4 << endl;

    return 0;
}
