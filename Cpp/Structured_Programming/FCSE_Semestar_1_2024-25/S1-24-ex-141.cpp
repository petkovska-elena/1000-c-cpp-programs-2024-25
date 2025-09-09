// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Implement a recursive function:
*       int BrojPozitivni(int niza[], int n)
*    - niza[] is the array of integers.
*    - n is the number of elements in the array.
*
* 2. Base case:
*       - If n == 0, return 0 (no elements → no positive numbers).
*
* 3. Recursive case:
*       - Check if the last element (niza[n-1]) is positive.
*       - If positive, return 1 + BrojPozitivni(niza, n-1).
*       - Otherwise, return BrojPozitivni(niza, n-1).
*
* 4. In main():
*       - Read an integer N (size of array).
*       - Read N integers into the array.
*       - Call BrojPozitivni with the array and N.
*       - Print the returned value.
*
* Notes:
* - Positive means strictly greater than 0.
* - The function must use recursion, no loops.
*
* Example Input:
* 3
* 2 -2 5
*
* Example Output:
* 2
*/

#include <iostream>
using namespace std;

int BrojPozitivni(int niza[], int n) {
    if (n == 0) return 0;
    if (niza[n - 1] > 0)
        return 1 + BrojPozitivni(niza, n - 1);
    else
        return BrojPozitivni(niza, n - 1);
}

int main() {
    int N;
    cin >> N;

    int niza[100];
    for (int i = 0; i < N; i++)
    {
        cin >> niza[i];
    }

    cout << BrojPozitivni(niza, N) << endl;
    return 0;
}
