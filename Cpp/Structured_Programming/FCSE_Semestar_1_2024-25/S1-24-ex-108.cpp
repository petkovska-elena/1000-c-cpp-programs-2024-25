// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

#include <iostream>
using namespace std;

int main() {
    char hex_broj;
    int dek_zbir = 0;

    while (cin >> hex_broj)
    {
        int dek_broj = 0;
        if (hex_broj == '.') break;
        if (hex_broj >= '0' && hex_broj <= '9') dek_broj = hex_broj - '0';
        else if (hex_broj >= 'A' && hex_broj <= 'F') dek_broj = hex_broj - 'A' + 10;
        else if (hex_broj >= 'a' && hex_broj <= 'f') dek_broj = hex_broj - 'a' + 10;

        dek_zbir = dek_zbir + dek_broj;
    }

    if (dek_zbir % 16 == 0 && dek_zbir % 100==16) cout << "Poln pogodok" <<endl;
    else if (dek_zbir % 16 == 0) cout<< "Pogodok" << endl;
    else cout << dek_zbir << endl;

    return 0;
}

