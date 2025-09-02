//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1) return 1;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a < 10 || b < 10) break;
        int last_digit = a % 10;
        a /= 10;

        int multiplier = 1;
        int temp = a;

        while (temp > 0)
        {
            multiplier *= 10;
            temp /= 10;
        }

        int new_a = last_digit * multiplier + a;
        if (new_a > b) { cout << "YES" << endl; }
        else { cout << "NO" << endl; }
    }
    return 0;
}
