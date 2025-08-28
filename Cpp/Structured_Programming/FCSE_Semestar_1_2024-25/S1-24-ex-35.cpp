//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski */

/* Given a positive integer N, calculate and print the sum
 * of the squares of the first N natural numbers.
 * For example, if N = 3, the result is 1² + 2² + 3² = 14. */

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    int sum = 0;

    for (int i = 1; i <= N; i++)
    {
        sum += i * i;
    }

    cout << "The sum of the squares of the first N natural numbers is: " << sum << endl;
    return 0;
}


