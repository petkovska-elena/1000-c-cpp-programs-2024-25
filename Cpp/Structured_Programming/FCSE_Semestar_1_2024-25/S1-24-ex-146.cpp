// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
 * 1. Read integers m and n, representing the number of rows and columns of the matrix (m, n ≤ 100).
 * 2. Declare a 2D array to store the matrix elements.
 * 3. Read all elements of the matrix from input.
 * 4. For each row:
 *    - If the number of columns (n) is odd:
 *         - Find the middle column index mid = n / 2.
 *         - Compute sum1 = sum of first half of the row (including the middle element).
 *         - Compute sum2 = sum of second half of the row (including the middle element).
 *         - Replace the middle element with abs(sum1 - sum2).
 *    - If the number of columns (n) is even:
 *         - Find the two middle column indices mid1 = n / 2 - 1 and mid2 = n / 2.
 *         - Compute sum1 = sum of first half of the row (including mid1).
 *         - Compute sum2 = sum of second half of the row (including mid2).
 *         - Replace both middle elements with abs(sum1 - sum2).
 * 5. Print the transformed matrix.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int mat[100][100];

    // Read matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    // Process each row
    for (int i = 0; i < m; i++) {
        if (n % 2 == 1) {
            int mid = n / 2;
            int sum1 = 0, sum2 = 0;
            for (int j = 0; j <= mid; j++) sum1 += mat[i][j];
            for (int j = mid; j < n; j++) sum2 += mat[i][j];
            mat[i][mid] = abs(sum1 - sum2);
        } else {
            int mid1 = n / 2 - 1;
            int mid2 = n / 2;
            int sum1 = 0, sum2 = 0;
            for (int j = 0; j <= mid1; j++) sum1 += mat[i][j];
            for (int j = mid2; j < n; j++) sum2 += mat[i][j];
            int diff = abs(sum1 - sum2);
            mat[i][mid1] = diff;
            mat[i][mid2] = diff;
        }
    }

    // Print transformed matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
