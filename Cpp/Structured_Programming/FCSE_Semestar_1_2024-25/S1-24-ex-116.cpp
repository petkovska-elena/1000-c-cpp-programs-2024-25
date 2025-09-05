// Created by Elena Petkovska on 4.6.2025.
//

/* Laboratoriski vezbi 2 - 2024/25 */

/* 1. From a standard input, the number x is read.
 * 2. On the standard output, print all two-digit numbers (each number on a new line) whose sum of digits is divisible by x.
 * For example: Input:  9
* For example: Result:
                        18
                        27
                        36
                        45
                        54
                        63
                        72
                        81
                        90
                        99 */

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i = 10; i < 100; i++)
    {
        if ((i/10 + i %10) % x == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
