//
// Created by Elena Petkovska on 8.4.25.
//

/* Prezentacii Predavanja */

/* Zbir na cifri na broj */

#include <iostream>
using namespace std;

int sum_digits (int n)
{
    if (n < 10) return n;
    else return (n % 10 + sum_digits(n/10));
}

int main()
{
    int n;
    cin >> n;
    cout << sum_digits(n);
    return 0;
}