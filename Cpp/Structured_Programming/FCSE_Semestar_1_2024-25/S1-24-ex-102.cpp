// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int final_zbir = 0;
    int baran = 0;
    int i = 1;

    while (i < n)
    {
        int zbir = 0;
        for (int delitel = 1; delitel <= i/2; delitel++)
        {
            if (i % delitel == 0)
            {
                zbir = zbir + delitel;
            }
        }

        if (zbir > final_zbir)
        {
            final_zbir = zbir;
            baran = i;
        }
        i++;
    }
    cout << baran;
    return 0;
}
