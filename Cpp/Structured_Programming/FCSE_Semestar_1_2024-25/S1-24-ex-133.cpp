// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read two integers N and M (matrix dimensions), where 1 <= N, M < 100.
* 2. Read an NxM matrix of integers from standard input.
* 3. Read two integers i and j that represent the coordinates of the central element (the splitter).
*
* 4. This central element splits the matrix into 4 quadrants:
*    - Quadrant I   → Top-right     (rows 0 to i-1, cols j+1 to M-1)
*    - Quadrant II  → Top-left      (rows 0 to i-1, cols 0 to j-1)
*    - Quadrant III → Bottom-left   (rows i+1 to N-1, cols 0 to j-1)
*    - Quadrant IV  → Bottom-right  (rows i+1 to N-1, cols j+1 to M-1)
*
* 5. For each quadrant, calculate the sum of its elements.
*    - If the quadrant doesn’t exist (i.e. any part is out of bounds), print 0 for that quadrant.
*
* 6. Print the 4 sums on a single line, in this order:
*    Quadrant I, II, III, IV
*
* Example:
* Input:
* 2 3
* 5 7 8
* 1 2 3
* 1 1
*
* Output:
* 15 5 1 5
*/

#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matrix[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    int r, c;
    cin >> r >> c;
    int sum = 0;

    //Kvadrant I
    for (int i = 0; i < r; i++) {
        for (int j = c; j < M; j++) {
            sum+=matrix[i][j];
        }
    }
    cout<<sum<<" ";

    //Kvadrant II
    sum=0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum+=matrix[i][j];
        }
    }
    cout<<sum<<" ";

    //Kvadrant III
    sum=0;
    for (int i = r; i < N; i++) {
        for (int j = 0; j < c; j++) {
            sum+=matrix[i][j];
        }
    }
    cout<<sum<<" ";

    //Kvadrant IV
    sum=0;
    for (int i = r; i< N; i++) {
        for (int j = c; j < M; j++) {
            sum+=matrix[i][j];
        }
    }
    cout << sum << " ";

    return 0;
}
