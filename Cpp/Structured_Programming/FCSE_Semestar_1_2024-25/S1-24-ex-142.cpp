// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read integer X from standard input.
* 2. Read integers M and N for the matrix dimensions.
* 3. Read M rows with N integers each into a matrix.
* 4. For each row:
*       - Calculate the sum of its elements.
*       - If the sum is greater than X, set all elements in that row to 1.
*       - If the sum is less than X, set all elements in that row to -1.
*       - If the sum is equal to X, set all elements in that row to 0.
* 5. Print the modified matrix with elements in each row separated by spaces.
*
* Example Input:
* 31
* 4 4
* 4 2 7 11
* 3 8 16 1
* 17 8 9 5
* 6 14 4 7
* 5 15 5 6
*
* Example Output:
* -1 -1 -1 -1
* -1 -1 -1 -1
* 1 1 1 1
* 0 0 0 0
* 0 0 0 0
*/

#include <iostream>
using namespace std;

int main() {

    int X, M, N;
    if (! (cin >> X >> M >> N)) return 0;

    const int MAXM = 100, MAXN = 100;
    int a[MAXM][MAXN];

    //Read the matrix
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> a[i][j];
        }
    }

    //Process each row
    for (int i = 0; i < M; ++i)
    {
        long long sum = 0;
        for (int j = 0; j < N; ++j) sum += a[i][j];

        int fill_value = 0;
        if (sum > X) fill_value = 1;
        else if (sum < X) fill_value = -1;

        for (int j = 0; j < N; ++j) a[i][j] = fill_value;
    }

    cout << '\n';

    //Print matrix
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (j) cout << ' ';
            cout << a[i][j];
        }
        cout << '\n';
    }

    return 0;
}