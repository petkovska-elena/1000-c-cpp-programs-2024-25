// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read an integer N (N ≤ 100) from standard input.
* 2. Then read N positive integers (the array elements).
* 3. Read an integer `ind` (starting index for summing).
* 4. Write a function `sum_pos` that takes:
*    - a pointer to the start of the array,
*    - the index `ind`,
*    - the number of valid elements `N`.
*
* 5. The function should:
*    - Return the sum of elements starting from position `ind` up to the end of the array.
*    - If `ind` ≥ N, return 0.
*    - Solve this using pointers only (no [] operator).
*
* Example:
* Input:
* 10
* 2 4 6 8 1 3 9 12 33 44
* 6
*
* Output:
* 98
*
* Explanation: 9 + 12 + 33 + 44 = 98
*/

#include <iostream>
using namespace std;

int sum_pos(int *p, int ind, int N) {
    if (ind >= N) { return 0; }

    int sum = 0;
    for (int i = ind; i < N; i++)
    {
        sum += *(p + i);
    }
}

int main() {
    int N;
    cin >> N;

    if (N < 1 || N > 100)
    {
        cout << "Invalid N value" << endl;
        return 0;
    }

    int arr[100];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int ind;
    cin >> ind;

    if (ind < 0)
    {
        cout << "Invalid index value" << endl;
        return 0;
    }

    cout << sum_pos(arr, ind, N) << endl;
    return 0;
}
