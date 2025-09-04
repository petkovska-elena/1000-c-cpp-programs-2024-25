// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

#include <iostream>
using namespace std;

bool is_zig_zag (int num) {
    int prev_digit = -1;
    bool is_prev_less_than_five = false;

    while (num > 0) {
        int digit = num % 10;  // Земаме последната цифра од бројот
        num /= 10;  // Отстрануваме последната цифра

        bool is_less_than_five = (digit < 5);

        if (prev_digit != -1) {
            // Ако едната цифра е помала од 5, а другата е поголема или еднаква на 5
            if (is_prev_less_than_five == is_less_than_five) {
                return false;  // Не е цик-цак ако два соседни броеви се исти по карактеристика
            }
        }

        prev_digit = digit;
        is_prev_less_than_five = is_less_than_five;
    }
    return true;
}

int main() {
    int num;
    while (cin >> num) {
        if (num < 10) {
            continue;
        }

        if (is_zig_zag(num)) {
            cout << num << endl;
        }
    }
    return 0;
}