// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

/* TO-DO Steps:
* 1. Read two characters z1 and z2 from standard input.
* 2. Then read lines of text until a line containing only the character '#' is read.
* 3. For each line:
*       - Find the position of the first occurrence of z1.
*       - Find the position of the first occurrence of z2 after z1.
*       - Extract the substring between z1 and z2 (excluding z1 and z2 themselves).
*       - Print that substring on a new line.
*
* Notes:
* - Each line contains exactly one z1 and one z2, with z1 always before z2.
* - Between z1 and z2 there is always at least one character.
* - Each line is no longer than 80 characters.
* - Stop processing when the line with only '#' is encountered.
*
* Example Input:
* 0 9
* nfjskdz0nvjkfdmnlks9bvfkjmcdz,
* bfhjdskvfdkl0fvkdzddjmje k dmkl dz kd fds!%mlacsd9
* 0fbnrjkdn9
* fjkd0jdfkfmjndksfjd;sj sad;jm 9nfcjka
* #
*
* Example Output:
* nvjkfdmnlks
* fvkdzddjmje k dmkl dz kd fds!%mlacsd
* fbnrjkdn
* jdfkfmjndksfjd;sj sad;jm
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char z1, z2;
    cin >> z1 >> z2;
    cin.ignore();
    string line;

    while (getline(cin, line) && line != "#")  {
    size_t p1 = line.find (z1);
    size_t p2 = line.find (z2, p1 + 1);
    cout << line.substr (p1 + 1, p2 - p1 - 1) << "\n";
    }
    return 0;
}
