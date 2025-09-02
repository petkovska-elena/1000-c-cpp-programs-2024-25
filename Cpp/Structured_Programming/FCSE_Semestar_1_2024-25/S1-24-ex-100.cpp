//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - MKD */

#include <iostream>
using namespace std;

bool blag_broj(int n) {
    while (n > 0)
    {
        if (n % 10 % 2 != 0) { return false; }
        else { n/= 10;}
    }
    return true;
}

int main() {
    int start, end, baran = 0;
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        if (blag_broj(i))
        {
            baran = i;
            cout << baran << endl;
            break;
        }
    }
    if (baran == 0) { cout << "NE" << endl;}
    return 0;
}