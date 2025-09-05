// Created by Elena Petkovska on 4.6.2025.
//

/* Laboratoriski vezbi 1 - 2024/25 */

/* TO-DO Steps:
 * 1. Write a program that, for a five-digit number entered from standard input, will 'sharpen' it.
 * 2. A number is 'sharpened' if its leftmost and rightmost digits are removed.
 * 3. Output the sharpened number, and in the second line, print the sum of the digits that were sharpened.
 * 4. Explanation: The number 54321 is sharpened to 432. The digits that are sharpened are 5 and 1.
 * Example: Input: 54321
 * Example: Result: 432
 *                  6 */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int leftmost = number / 10000;
    int rightmost = number % 10;

    int sharpened = (number / 10) % 1000;

    int sum = leftmost + rightmost;

    cout << sharpened << endl;
    cout << sum << endl;
    return 0;
}
