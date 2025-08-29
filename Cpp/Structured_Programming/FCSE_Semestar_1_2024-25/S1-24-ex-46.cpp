//
// Created by Elena Petkovska on 8.4.25.
//

/* Prezentacii Predavanja */

/* Pecatenje dzevzdi */

#include <iostream>
using namespace std;

void stars(int n)
{
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << " * ";
        }
        cout << endl;

        stars(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    stars(n);
}