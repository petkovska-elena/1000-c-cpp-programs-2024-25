// Created by Elena Petkovska on 4.6.2025.
//

/* Courses FINKI 2024/25 - Zadachi za vezhbanje za 1 kolokvium */

/* TO-DO Steps:
* 1. Еден природен е „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
* 2. Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
* 3. Од тастатура се внесува природен број n (n > 9).
* 4. Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
* 5. Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
*
* For Example:
* Input:
* 5
* Result:
* Brojot ne e validen */

#include <iostream>
using namespace std;

int reversed_number(int num) {
    int reversed = 0;

    while (num > 0)
    {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int n;
    cin >> n;

    if (n <= 9)
    {
        cout << "Brojot ne e validen" << endl;
        return 1;
    }

    for (int i = n - 1; i >= 9; i--)
    {
        int reversed = reversed_number(i);

        //Count number or digits without string
        int num_digits = 0;
        int temp = i;
        while (temp > 0)
        {
            temp /= 10;
            num_digits++;
        }

        /* int num_digits = to_string(i).length(); */

        if (reversed % num_digits == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
