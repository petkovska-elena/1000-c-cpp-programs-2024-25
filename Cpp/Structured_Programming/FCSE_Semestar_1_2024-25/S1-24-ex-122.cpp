// Created by Elena Petkovska on 4.6.2025.
//

/* Courses FINKI 2024/25 - Zadachi za vezhbanje za 1 kolokvium */

/* TO-DO Steps:
* 1. Од тастатура се читаат 2 позитивни цели броеви.
* 2. Доколку се внесе барем еден негативен број или 0, треба да се печати „Invalid input“.
* 3. Треба да се определи дали помалиот број „е парен еквивалент“ од поголемиот број.
* 4. Еден број „е парен еквивалент“ на друг број, ако и само ако неговите цифри се наоѓаат
*    на парните позиции од другиот број, во ист редослед (позициите се бројат оддесно-налево).
* 5. Соодветно да се испечатат пораки „PAREN“ и „NE“.
*
* For Example:
* Input:
* 12345678 1357
* Result:
* PAREN
*/

#include <iostream>
using namespace std;

int extract_even_position_digits(int num) {
    int result = 0;
    int multiplier = 1;
    int pos = 1;

    while (num > 0) {
        int digit = num % 10;
        if (pos % 2 == 0) {
            result += digit * multiplier;
            multiplier *= 10;
        }
        num /= 10;
        pos++;
    }

    return result;
}

int main() {
    int m, n;
    cin >> m >> n;

    if ((m <= 0 || n <= 0) /* || ((m % 10) % 2 != 0) || ((n % 10) % 2 != 0) */ )
    {
        cout << "Invalid input" << endl;
        return 0;
    }

    int smaller, larger;
    if (m < n) { smaller = m; larger = n; }
    else { smaller = n; larger = m; }

    int extracted = extract_even_position_digits(larger);

    if (extracted == smaller)
        cout << "PAREN" << endl;
    else
        cout << "NE" << endl;

    return 0;
}
