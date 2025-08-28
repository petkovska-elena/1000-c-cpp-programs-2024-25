//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski */

/* Read an integer from standard input and print its digits in reverse order.
 * For example, if the input is 12345, the output should be 54321. */

#include <iostream>
using namespace std;

int main()
{
    long int n, temp;
    cout << "Vnesi broj: " << endl;
    cin >> n;

    while (n > 0)
    {
        temp = n % 10;
        cout << temp;
        n = n/10;
    }

    cout << endl;
    return 0;
}