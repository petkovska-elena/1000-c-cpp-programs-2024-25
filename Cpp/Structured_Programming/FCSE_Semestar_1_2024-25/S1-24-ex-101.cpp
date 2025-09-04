// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

#include <iostream>
using namespace std;

bool e_interesen (int n) {
    int cifri = 0, prevrten = 0, temp = n;

    while (temp > 0)
    {
        prevrten = prevrten * 10 + temp % 10;
        temp /= 10;
        cifri++;
    }
    return (prevrten % cifri == 0);
}

int main() {
    int n;
    cin >> n;

    if (n <= 9)
    {
        cout << "Brojot ne e validen" << endl;
        return 1;
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (e_interesen(i))
        {
            cout << i << " ";
            return 0;
        }
    }
    return 0;
}