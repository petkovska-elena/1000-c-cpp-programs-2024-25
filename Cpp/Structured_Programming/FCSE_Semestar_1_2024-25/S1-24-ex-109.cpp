// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

//zigzag 121326342 2<4, 4>3, 3<6, 6>2

#include <iostream>
using namespace std;

bool is_zig_zag (int n) {
    if (n < 10) return false;

    int last_digit =  n % 10;
    n /= 10;

    int current_digit = n % 10;
    n /= 10;

    if (last_digit == current_digit) return false;

    bool larger = last_digit > current_digit;

    while(n > 0) {
        larger = !larger;
        last_digit = current_digit;
        current_digit = n % 10;
        n /= 10;
        if ((last_digit <= current_digit &&  larger )||( last_digit >= current_digit && !larger))  {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    while(cin >> num) {
        if (is_zig_zag(num)) cout << num << endl;
    }
    return 0;
}