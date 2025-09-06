// Created by Elena Petkovska on 4.6.2025.
//

/* Courses FINKI 2024/25 - Zadachi za vezhbanje za 1 kolokvium */

/* TO-DO Steps:
* 1. Од тастатура се читаат непознат број цели броеви.
* 2. Броевите помали од 10 се игнорираат.
* 3. Читањето завршува кога ќе се прочита знак што не е цифра (на пр. буква, специјален знак и сл.).
* 4. За секој валиден број (≥10), провери дали е „цик-цак“ број:
*      - За секој пар соседни цифри важи:
*        > Прво расте, па паѓа, па расте... или обратно (наизменично поголем и помал).
* 5. Доколку бројот е цик-цак, испечати го.
*
* Пример:
* Влез:
* 343
* 22
* 4624
* 123456
* 6231209
* 9
* k
*
* Излез:
* 343
* 4624
* 6231209
*/

#include <iostream>
using namespace std;

bool is_zigzag (int numbers) {
    if (numbers < 10) { return false; }

    int last_digit = numbers % 10;
    numbers /= 10;

    int current_digit = numbers % 10;
    numbers /= 10;

    if (last_digit == current_digit) { return false; }
    bool larger = last_digit > current_digit;

    while (numbers > 0)
    {
        larger = !larger;
        last_digit = current_digit;
        current_digit = numbers % 10;
        numbers /= 10;
        if ((last_digit <= current_digit && larger) || (last_digit >= current_digit && !larger)) { return false; }
    }
    return true;
}

int main() {
    int numbers;

    while (cin >> numbers)
    {
        if (is_zigzag(numbers)) cout << numbers << endl;
    }

    return 0;
}
