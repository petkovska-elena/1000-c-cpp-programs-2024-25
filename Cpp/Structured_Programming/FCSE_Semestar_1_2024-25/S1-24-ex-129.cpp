// Created by Elena Petkovska on 4.6.2025.
//

/* Courses FINKI 2024/25 - Zadachi za vezhbanje za 1 kolokvium */

/* TO-DO Steps:
* 1. Read an unknown number of whole numbers from input.
* 2. Stop reading when a non-digit character is encountered.
* 3. Ignore numbers smaller than 10.
* 4. For each valid number (10 or greater), check if it is a "цик-цак" number.
* 5. A number is цик-цак if for every two adjacent digits:
*    - one digit is < 5 and the other is ≥ 5, and they alternate.
* 6. Print all such цик-цак numbers on the output.
*
* Example:
* Input: 5005 5050 60619 21365 12345 8045 8050 k
* Output:
* 5050
* 60619
* 8050
*/

#include <iostream>
using namespace std;

bool is_zigzag (int number) {
    if (number < 10) { return false; }

    int last_digit = number % 10;
    number /= 10;

    while (number > 0)
    {
        int current_digit = number % 10;

        if (!((last_digit < 5 && current_digit >= 5) || (last_digit >= 5 && current_digit < 5))) { return false; }
        last_digit = current_digit;
        number /= 10;
    }
    return true;
}

int main() {
    int number;

    while (cin >> number)
    {
        if (is_zigzag(number)) { cout << number << endl; }
    }

    return 0;
}
