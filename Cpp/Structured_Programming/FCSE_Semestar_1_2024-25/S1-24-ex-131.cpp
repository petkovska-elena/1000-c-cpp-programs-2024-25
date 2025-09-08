// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read multiple rows of input, where each row begins with an integer N (N >= 1),
*    followed by N integers on the same line.
* 2. For each row, identify the number whose **most significant digit** (i.e. first digit from the left)
*    is the largest among all N numbers in that row.
* 3. Print that number as the result for that row.
* 4. Stop reading input when N is 0.
*
* For example:
* Input:
*  5 123 92 514 2000 99
*  4 398 270 888 74
*  0
*
* Output:
*  514  // because 5 is the highest leading digit
*  888  // because 8 is the highest leading digit
*/

#include <iostream>
using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0)
    {
        int max_digit = -1;
        int result = 0;

        for (int i = 0; i < N; i++)
        {
            int num;
            cin >> num;
            int temp = num;

            while (temp >= 10)
            {
                temp /= 10;
            }

            if (temp > max_digit)
            {
                max_digit = temp;
                result = num;
            }
        }
        cout << result << endl;
    }
    return 0;
}