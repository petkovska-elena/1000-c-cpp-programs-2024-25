//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max = 0;
    int i = 1;
    int the0ne = 0;

    while (i < n)
    {
        int sum = 0;

        for (int j = 1; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum > max)
        {
            max = sum;
            the0ne = i;
        }
        i++;
    }
    cout << the0ne;
    return 0;
}