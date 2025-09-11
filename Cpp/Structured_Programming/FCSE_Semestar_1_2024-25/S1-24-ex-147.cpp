// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read n (n > 2), then read an n x n matrix A with real numbers.
* 2. Compute:
*       X = sum of all elements strictly below the main diagonal of A (i > j).
*       Y = sum of all elements strictly below the secondary diagonal of A (i + j > n - 1).
* 3. Build a new matrix B (n x n) with:
*       - B[i][i] = X  for every main diagonal position.
*       - B[i][n - 1 - i] = Y  for every secondary diagonal position.
*       - If a position belongs to both diagonals (center when n is odd), its value is X + Y.
*       - All other positions are 0.
* 4. Print matrix B with spaces between numbers and each row on a new line.
*
* Example:
* Input:
* 3
* 101 202 303
* 11  22  33
* 1   2   3
* Output:
* 14 0 38
* 0 52 0
* 38 0 14
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    double A[100][100];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    // X: below main diagonal, Y: below secondary diagonal
    double X = 0.0, Y = 0.0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > j) X += A[i][j];
            if (i + j > n - 1) Y += A[i][j];
        }
    }

    // Build and print B
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            double val = 0.0;
            if (i == j) val += X;
            if (i + j == n - 1) val += Y;
            if (j) cout << ' ';
            cout << val;
        }
        cout << '\n';
    }
    return 0;
}