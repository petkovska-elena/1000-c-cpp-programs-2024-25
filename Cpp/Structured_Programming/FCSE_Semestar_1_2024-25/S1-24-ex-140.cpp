// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read lines of text from standard input until a line containing only "#" is read.
* 2. For each line:
*       - Go through each character and check if it is a digit ('0' to '9').
*       - Count how many digits are found.
*       - Store all digits in a temporary string.
* 3. Sort the string of digits in ascending order based on ASCII code.
* 4. Print the count of digits, followed by a colon ":", then the sorted digits.
* 5. Repeat this process for every line before "#".
*
* Notes:
* - Each input line has at most 100 characters.
* - Digits must appear in the output in ascending order (0–9).
* - If there are repeated digits, they appear as many times as they occur.
*
* Example Input:
* 74I9B0
* abc123
* #
*
* Example Output:
* 3:0479
* 3:123
*/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    string line;
    while (getline (cin, line) && line != "#")
    {
        string digits = "";
        int count = 0;

        //Collect digits
        for (char c: line)
        {
            if (isdigit (c))
            {digits += c;
                count++;
            }
        }

        //Sort digits in ascending order
        sort (digits.begin(), digits.end());

        //Output
        cout << count << ":" << digits << "\n";
    }
    return 0;
}