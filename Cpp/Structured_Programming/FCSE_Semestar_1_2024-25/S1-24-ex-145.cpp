// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Implement a recursive function:
*       int maxDigit(int n)
*    which returns the largest digit in the integer n.
*    - If n is negative, work with its absolute value.
*    - Base case: if n < 10, return n (only one digit left).
*    - Recursive case:
*         - Get last digit: d = n % 10
*         - Recursively find max in the rest: m = maxDigit(n / 10)
*         - Return the larger of d and m.
*
* 2. In main():
*       - Continuously read integers from standard input until reading fails (non-number or EOF).
*       - For each read number, call maxDigit() and print the result on a new line.
*
* Notes:
* - No global variables allowed.
* - The recursion must handle both positive and negative integers.
*
* Example Input:
* 52934
* 98765
* -12345
* q
*
* Example Output:
* 9
* 9
* 5
*/

#include <iostream>
using namespace std;

// Recursive function to find the maximum digit
int maxDigit(int n) {
    if (n < 0) n = -n;
    if (n < 10) return n;
    int last = n % 10;
    int maxRest = maxDigit(n / 10);
    return (last > maxRest) ? last : maxRest;
}

int main() {
    int num;
    while (cin >> num) {
        cout << maxDigit(num) << "\n";
    }
    return 0;
}