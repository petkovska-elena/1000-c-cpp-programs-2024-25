// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. From standard input, read lines until "0" is read.
* 2. Find the longest row that has at least two digits.
* 3. Among those, select the longest line by length.
*    If there is a tie, select the last one that appears.
* 4. In the selected line, find the position of the first digit and the last digit.
* 5. Print the substring from the first digit through the last digit, inclusive,
*    preserving all characters and spaces between them.
*
* Notes:
* - Digits are 0 to 9.
* - The terminating line is a single 0 on its own.
* - No line is longer than 100 characters.
*
* Example Input:
* aaa123aa222aa2aaa23aaaaa22
* aaaaaaaaaaaaaa 23aaaa
* 123 aaa  aaa  aaa  aa 12345  aaa  aaa  2a
* 0
*
* Example Output:
* 123 aaa  aaa  aaa  aa 12345  aaa  aaa  2
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool has_two_digits (const string &line) {
    int count = 0;
    for (char ch : line)
    {
        if (isdigit(ch)) count++;
        if (count >= 2) return true;
    }
    return false;
}

int main() {
    string line;
    string longest_line;
    int max_length = -1;

    //Step 1: Read lines until "0" is read
    while (true)
    {
        getline (cin, line);
        if (line == "0") break;

        if (has_two_digits(line))
        {
            if ((int) line.size() > max_length)
            {
                max_length = line.size();
                longest_line = line;
            }

            else if ((int) line.size() == max_length)
            {
                //If it's the same length, take the last line
                longest_line = line;
            }
        }
    }

    //Step 2: Find the first and last digit in the longest line
    int first_digit = -1, last_digit = -1;

    //first digit
    for (int i = 0; i < (int) longest_line.size(); ++i)
    {
        if (isdigit (longest_line[i]))
        {
            first_digit = i;
            break;
        }
    }

    //last digit
    for (int i = (int) longest_line.size() -1; i>= 0; --i)
    {
        if (isdigit(longest_line[i]))
        {
            last_digit = i;
            break;
        }
    }

    //Step 3: Output substring
    if (first_digit != -1 && last_digit != -1)
    {
        cout << longest_line.substr(first_digit, last_digit - first_digit + 1) << endl;
    }
    return 0;
}