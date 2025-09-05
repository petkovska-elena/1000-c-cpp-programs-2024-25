// Created by Elena Petkovska on 4.6.2025.
//

/* Laboratoriski vezbi 2 - 2024/25 */

/* TO-DO Steps:
* 1. From standard input, the numbers a, r, and N are read.
* 2. Display on the screen the first N terms of a geometric progression with the initial term a and common ratio r.
* 3. A geometric progression is a sequence of numbers in which each term is obtained by multiplying the previous term by the common ratio r.
* 4. Example: If a = 2, r = 3, the first 5 terms in the progression are:
        2
        6 (2 * 3 = 6)
        18 (6 * 3 = 18)
        54 (18 * 3 = 54)
        162 (54 * 3 = 162)

* For Example:
* Input: 2 3 5
* Result: 2, 6, 18, 54, 162
*
* Input: 2 -2 10
* Result: 2, -4, 8, -16, 32, -64, 128, -256, 512, -1024 */

#include <iostream>
using namespace std;

int main() {
    int a, r, N;
    cin >> a >> r >> N;

    int temp = a;

    for (int i = 0; i < N; i++)
    {
        cout << temp;
        if (i < N - 1)
        {
            cout << ", ";
            temp = temp * r;
        }
    }

    cout << endl;
    return 0;
}
