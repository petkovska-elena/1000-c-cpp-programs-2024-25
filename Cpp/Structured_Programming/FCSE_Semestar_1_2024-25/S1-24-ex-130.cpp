// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. From standard input, read lines of text until the '#' symbol is encountered.
* 2. Ignore case (treat uppercase and lowercase letters the same).
* 3. Identify all consecutive pairs of **adjacent vowels** in each line.
* 4. Print each pair of vowels on a new line in lowercase.
* 5. After processing all input, print the total number of vowel pairs detected.
*
* Notes:
* - Vowels are: a, e, i, o, u
* - The input ends when a line contains only the '#' symbol.
*
* Example Input:
* IO is short for Input Output
* medioio medIo song
* #
*
* Example Output:
* io
* ou
* io
* oi
* io
* io
* 6
*/

#include <iostream>
#include <cctype>
using namespace std;

bool is_vowel (char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    char line[201];
    int total = 0;

    while (true)
    {
        cin.getline(line, 201);

        if (line[0] == '#' && line[1] == '\0') break;

        for (int i = 0; line[i] != '\0' && line[i+1] != '\0'; i++)
        {
            char c1 = tolower(line[i]);
            char c2 = tolower(line[i+1]);

            if (is_vowel(c1) && is_vowel(c2))
            {
                cout << c1 << c2 << endl;
                ++total;
            }
        }
    }

    cout << total << endl;
    return 0;
}