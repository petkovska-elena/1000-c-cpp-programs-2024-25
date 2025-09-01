//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
#include <cmath>
using namespace std;

/* vnes -> start -> 12345
 * vnes -> end -> 9182932
 * 1(234)5
 * 2*3*4 dali se deli so 15
 * 9(18293)2
 * 1*8*2*9*3*2 dali se deli so 92
 * ako vo sredinata na brojot od start do end
 * se naogja nula -> skip */

int main() {
    int start, end;
    cin >> start >> end;

    int count = 0;

    for (int num = start; num <= end; ++num) {
        int n = num;
        int digits = 0;

        int temp = n;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        if (digits < 3) continue;

        int last_digit = n % 10;

        int first_digit = n;
        for (int i = 1; i < digits; i++) {
            first_digit /= 10;
        }

        int divisor = first_digit * 10 + last_digit;

        int middle = (n / 10) % static_cast<int>(pow(10, digits - 2));

        int product = 1;
        bool has_zero = false;
        while (middle > 0) {
            int d = middle % 10;
            if (d == 0) {
                has_zero = true;
                break;
            }
            product *= d;
            middle /= 10;
        }

        if (has_zero) continue;
        if (product % divisor == 0) {
            cout << num << " -> " << product << " == " << divisor
                 << " * " << (product / divisor) << endl;
            count++;
        }
    }

    cout << "Total: " << count << endl;
    return 0;
}

