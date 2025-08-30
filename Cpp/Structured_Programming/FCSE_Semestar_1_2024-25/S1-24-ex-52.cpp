//
// Created by Elena Petkovska on 8.4.25.
//

/* Vezhbi Kolokvum 1 */

/* Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 * Обратен број е бројот составен од истите цифри, но во обратен редослед
 * (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9).
 * Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
 * Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen). */

/* TO-DO Steps:
 * 1. Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 * 2. Обратен број е бројот составен од истите цифри, но во обратен редослед
 * 3. (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9).
 * 4. Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
 * 5. Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen). */

#include <iostream>
using namespace std;

int reverse_number(int num)
{
    int reversed = 0;
    while (num >0)
    {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main()
{
    int n;
    cout << "Vnesi priroden broj: ";
    cin >> n;

    if (n <= 9)
    {
        cout << "Brojot ne e validen!" << endl;
        return 0;
    }

    for (int i = n-1; i >= 10; i--)
    {
        int reversed = reverse_number(i);
        int num_digits = to_string(i).length();

        if (reversed % num_digits == 0)
        {
            cout << "Najgolemiot interesen broj pomal od " << n << " e: " << i << endl;
            return 0;
        }
    }

    cout << "Ne postoi interesen broj pomal od " << n << endl;
    return 0;
}