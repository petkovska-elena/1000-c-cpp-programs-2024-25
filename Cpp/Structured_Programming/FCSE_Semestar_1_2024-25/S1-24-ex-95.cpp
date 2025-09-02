//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        int diff_ab = abs(a - b);
        int diff_ac = abs(a - c);
        int diff_bc = abs(b - c);

        int min_diff = min (diff_ab, min(diff_ac, diff_bc));

        bool ab_equal = (diff_ab == min_diff);
        bool ac_equal = (diff_ac == min_diff);
        bool bc_equal = (diff_bc == min_diff);

        if ((ab_equal && ac_equal) || (ab_equal && bc_equal) || (ac_equal && bc_equal)) {
            if (a > b) swap(a, b);
            if (a < c) swap(a, c);
            if (b > c) swap(b, c);
            cout << a << " " << b << " " << c << endl;
        } else if (ab_equal) {
            if (a > b) swap(a, b);
            cout << a << " " << b << endl;
        } else if (ac_equal) {
            if (a > c) swap(a, c);
            cout << a << " " << c << endl;
        } else if (bc_equal) {
            if (b > c) swap(b, c);
            cout << b << " " << c << endl;
        }
    }
    return 0;
}