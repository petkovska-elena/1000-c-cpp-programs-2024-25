//
// Created by Elena Petkovska on 8.4.25.
//

/* Prezentacii Predavanja */

/* Fibonachieva niza so rekurzija */

#include <iostream>
using namespace std;

long fibonachi(long n)
{
    if (n == 1 || n == 2) return 1;
    else return fibonachi(n -1) + fibonachi(n - 2);
}

int main()
{
    long n;
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid case entered. Please enter a number larger than 0." << endl;
        return 0;
    }

    cout << fibonachi(n) << endl;
}