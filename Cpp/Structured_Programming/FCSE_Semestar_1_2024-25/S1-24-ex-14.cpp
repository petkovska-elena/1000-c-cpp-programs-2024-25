//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 2 (16.10.2024) */

/* Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е мала
 * или голема буква печати 1 или 0, соодветно.
 * ПОМОШ: Користете логички и релациски оператори за тестирање на ASCII вредноста на знакот.
 * Бонус: Направете проверка дали знакот е цифра" */

#include <iostream>
using namespace std;

int main()
{
    char character;
    int result;

    cout << "Vnesete znak od tastatura: ";
    cin >> character;

    result = (character >= 'a') && (character <= 'z');
    cout << "Dali e mala bukva: " << result;

    cout << endl;
    result = (character >= '0') && (character <= '9');
    cout << "Dali e broj: " << result;

    return 0;
}