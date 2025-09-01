//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 3) return 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << " + ";
            }
            else
            {
                cout << " - ";
            }
        } cout << endl;
    }
    return 0;
}
