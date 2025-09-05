// Created by Elena Petkovska on 4.6.2025.
//

/* Laboratoriski vezbi 2 - 2024/25 */

/* TO-DO Steps:
 * 1. From a standard input, the numbers N and T are read, followed by N numbers representing students' points.
 * 2. Display on the screen what percentage of the N students have received a grade of “excellent,” “good,” or “insufficient.”
 * 3. The grading criteria are as follows: “Excellent” if the points are greater than or equal to T,
 * 4. “Good” if the points are greater than or equal to T/2, but less than T, “Insufficient” if the points are less than T/2.
 * 5. Explanation: If T=60, then students with points: greater than or equal to 60 are "Excellent," between 30 (T/2) and 59 are "Good,"
 * 6. below 30 are "Insufficient." In the example with N=5 students and their points 75, 30, 50, 60, 20: two students are “Excellent” (75 and 60) - 2/5*100 = 40%
 * 7. two students are “Good” (30 and 50) - 2/5*100 = 40% one student is “Insufficient” (20) - 1/5*100 = 20%
* Example: Input:
* 5 60
* 75 30 50 60 20
* Result:
* Excellent: 40%
* Good: 40%
* Insufficient: 20%
*
* Example: Input:
* 10 50
* 55 25 50 40 60 15 35 45 50 20
* Result:
* Excellent: 40%
* Good: 40%
* Insufficient: 20% */

#include <iostream>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    int points;

    int count_excellent = 0;
    int count_good = 0;
    int count_insufficient = 0;

    for (int i = 0; i < N; i++) {
        cin >> points;

        if (points >= T ) { count_excellent++; }
        else if (points >= T/2.0 && points < T) { count_good++; }
        else { count_insufficient++; }
    }

    cout << "Excellent: " << (count_excellent * 100.0) / N << "%" << endl;
    cout << "Good: " << (count_good * 100.0) / N << "%" << endl;
    cout << "Insufficient: " << (count_insufficient * 100.0) / N << "%" << endl;
    return 0;
}
