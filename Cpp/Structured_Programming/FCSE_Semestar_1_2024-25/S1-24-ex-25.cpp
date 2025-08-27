//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 3 (23.10.2024) */

/* Да се напише програма за пресметување на y = x^n
 * за даден природен број n, n >= 1 и реален број x. */

#include <iostream>
using namespace std;

int main()
{
    int counter = 0, n;
    float x, y = 1;

    cout << "x = ";
    cin >> x;

    cout << "n = ";
    cin >> n;

    while (counter < n)
    {
        y *= x;
        counter++;
    }

    cout << x << "^" << n << " = " << y << endl;
    return 0;
}

