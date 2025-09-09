// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read an integer N from standard input.
* 2. Read N integers into an array a[0..N-1].
* 3. Implement a recursive function to compute the continued fraction:
*       v = a0 + 1 / (a1 + 1 / (a2 + ... + 1 / a_{N-1}))
* 4. In the recursive function:
*       - Base case: if i == N - 1, return a[i] as double.
*       - Recursive case: return a[i] + 1.0 / f(i + 1).
* 5. Call the recursive function starting at index 0.
* 6. Print the result on a new line, formatted to 4 decimal places.
*
* Notes:
* - Use double for calculations to avoid integer division.
* - N ≤ 100.
* - Assume input does not produce division by zero.
*
* Example Input:
* 5
* 1 2 3 4 5
*
* Example Output:
* 1.4333
*/

#include <iostream>
#include <iomanip>
using namespace std;

// a[i] + 1 / (a[i+1] + 1 / ... )
double cont_fraction(const int a[], int n, int i) {
    if (i == n -1) return (double)a[i];          // base case
    return (double) a[i] + 1.0 / cont_fraction(a, n, i + 1);
}

int main() {

    int N;
    if (!(cin >> N) || N <= 0) return 0;

    int a[100];                                  //N will not exceeed 100
    for (int i = 0; i < N; ++i) cin >> a[i];

    double v = cont_fraction(a, N, 0);

    cout << v << "\n";
    return 0;
}