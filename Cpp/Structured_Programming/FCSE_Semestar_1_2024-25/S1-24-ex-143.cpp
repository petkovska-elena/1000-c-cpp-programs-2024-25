// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read integer N from standard input.
* 2. Read a matrix A with dimensions N rows and 2*N columns.
* 3. Create a new matrix B with dimensions 2*N rows and N columns.
* 4. Fill the first N rows of B with the first N columns of A (left half of A).
* 5. Fill the next N rows of B with the last N columns of A (right half of A).
* 6. Print matrix B with each row on a new line and elements separated by spaces.
*
* Example Input:
* 3
* 1 2 3 4 5 6
* 7 8 9 10 11 12
* 13 14 15 16 17 18
*
* Example Output:
* 1 2 3
* 7 8 9
* 13 14 15
* 4 5 6
* 10 11 12
* 16 17 18
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[50][100]; // A: N x 2N
    int B[100][50]; // B: 2N x N

    // Read A
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < 2 * N; ++j)
            cin >> A[i][j];

    // Top half of B <- left half of A
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            B[i][j] = A[i][j];

    // Bottom half of B <- right half of A
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            B[i + N][j] = A[i][j + N];

    // Print B
    for (int i = 0; i < 2 * N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j) cout << ' ';
            cout << B[i][j];
        }
        cout << '\n';
    }
    return 0;
}
