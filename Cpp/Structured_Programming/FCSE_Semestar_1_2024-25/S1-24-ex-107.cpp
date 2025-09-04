// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

#include <iostream>
using namespace std;

bool e_razlichen (int n, int x) {
    int n_temp = n;

    while (n_temp > 0)
    {
        int x_temp = x;

        while (x_temp > 0)
        {
            if (n_temp % 10 == x_temp % 10)
            {
                return false;
            }
            x_temp = x_temp/10;
        }
        n_temp /= 10;
    }
    return true;
}

int main() {
    int n, x, res = 0;
    cin >> n >> x;

    for (int i = n - 1; i > 0; i--)
    {
        if (e_razlichen(i, x))
        {
            res = i;
            break;
        }
    }
    cout << res << endl;
    return 0;
}
