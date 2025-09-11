// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read two integers N and X.
* 2. Read N lines (each up to 80 chars).
* 3. For each line, transform it using a recursive function:
*       - Every lowercase letter a..z becomes the letter shifted X places forward, wrapping in the alphabet.
*       - Every uppercase letter A..Z becomes the letter shifted X places forward, wrapping in the alphabet.
*       - All other characters stay the same.
* 4. Print each transformed line on its own line.
*
* Notes:
* - Use recursion to process a line char by char.
* - Normalize X with X = ((X % 26) + 26) % 26 to handle big or negative shifts.
* - Wrapping example: 'z' with shift 2 becomes 'b'. 'Z' with shift 1 becomes 'A'.
*/

#include <iostream>
#include <string>
using namespace std;

int normShift(int X) {
    X %= 26;
    if (X < 0) X += 26;
    return X;
}

char shiftChar(char c, int X) {
    if (c >= 'a' && c <= 'z') {
        int base = 'a';
        return char(base + (c - base + X) % 26);
    }
    if (c >= 'A' && c <= 'Z') {
        int base = 'A';
        return char(base + (c - base + X) % 26);
    }
    return c;
}

// Recursively transform s starting at position i
void transformLine(string &s, int i, int X) {
    if (i == (int)s.size()) return;
    s[i] = shiftChar(s[i], X);
    transformLine(s, i + 1, X);
}

int main() {
    int N, X;
    if (!(cin >> N >> X)) return 0;
    X = normShift(X);
    string line;
    getline(cin, line);

    for (int i = 0; i < N; ++i) {
        getline(cin, line);
        transformLine(line, 0, X);
        cout << line << '\n';
    }
    return 0;
}