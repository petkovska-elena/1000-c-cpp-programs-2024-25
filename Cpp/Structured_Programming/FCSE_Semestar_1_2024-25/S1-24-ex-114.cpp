// Created by Elena Petkovska on 4.6.2025.
//

/* Laboratoriski vezbi 1 - 2024/25 */

/* TO-DO Steps:
* 1. Two phone numbers and the duration of the call in minutes are read from standard input.
* 2. Calculate the cost of the call, knowing that the first 30 minutes cost 3 den/min, and after those 30 minutes, the price per minute is 2 den.
* 3. Additionally, if both phone numbers are from the same operator, a 30% discount should be applied.
* 4. Operator1 uses (071, 072, 073)
* 5. Operator2 uses (074, 075, 076)
* Example: Input: 076388299
                  074387600
                  45
* Example: Output: 84 */

#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    float minutes;

    cin >> number1 >> number2 >> minutes;

    int operator1 = number1 / 1000000;
    int operator2 = number2 / 1000000;

    int price;
    if (minutes < 30) { price = minutes * 3; }
    else price = 30 * 3 + (minutes - 30) * 2;

    bool same_operator = ((operator1 == 71 || operator1 == 72 || operator1 == 73) && (operator2 == 71 || operator2 == 72 || operator2 == 73)) ||
                         ((operator1 == 71 || operator1 == 72 || operator1 == 73) && (operator2 == 71 || operator2 == 72 || operator2 == 73));

    if (same_operator)
    {
        float discount = price * 0.30;
        float final_price = price - discount;
        cout << final_price << endl;
    } else { cout << price << endl; }
    return 0;
}
