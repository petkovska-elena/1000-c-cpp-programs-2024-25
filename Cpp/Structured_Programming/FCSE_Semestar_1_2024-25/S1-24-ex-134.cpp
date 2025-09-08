// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
 * 1. Read an integer value from input — the total amount of money bet.
 * 2. Then, read each line representing a bet in the format:
 *       <code> <type> <coefficient>
 *    where:
 *       - <code> is a string (up to 9 characters),
 *       - <type> is an integer (0, 1, or 2),
 *       - <coefficient> is a float (positive real number).
 * 3. Stop reading when the line contains just '#'.
 *
 * 4. Track:
 *    - The total product of all coefficients (for calculating possible winnings).
 *    - The maximum coefficient seen so far, and the corresponding full bet (code and type).
 *    - If there are multiple max coefficients, keep the first one.
 *
 * 5. Calculate the total potential winnings as:
 *       winnings = product_of_all_coefficients × initial_bet
 *
 * 6. Output:
 *    - The full bet (code and type) with the highest coefficient.
 *    - The highest coefficient.
 *    - The total possible winnings (as an integer).
 *
 * Example:
 * Input:
 * 100
 * ab12 1 1.2
 * c234 2 2.0
 * #
 *
 * Output:
 * c234 2 2
 * 240
 */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    float money = 0;
    cin >> money;

    char ch[10], ch1[10];
    float br, br1 = 0, ko, ko1 = 0;

    float max = 0;
    float sum = 1;

    while (cin >> ch >> br >> ko && ch[0] != '#')
    {
        if (ko > max)
        {
            max = ko;
            br1 = br;
            ko1 = ko;
            strcpy(ch1, ch);
        }
        sum *= ko;
    }
    cout << ch1 << " " << br1 << " " << ko1 << endl;
    cout << money * sum << endl;
    return 0;
}