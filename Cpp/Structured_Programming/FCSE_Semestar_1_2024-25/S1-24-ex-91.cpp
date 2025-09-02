//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

/* Reads today's date DDMMYYYY
 * Reads n number of dates
 * Prints YES if 18 or older, otherwise NO */

#include <iostream>
using namespace std;

bool is_18(int today, int date) {
    int current_year = today % 10000;
    int birth_year = date % 10000;
    today = today / 10000;
    date = date / 10000;

    int current_month = today % 100;
    int birth_month = date % 100;

    today = today /100;
    date = date / 100;

    int current_day = today;
    int birth_day = date;

    int age = current_year - birth_year;
    if (age > 18) { return true; }
    if (age < 18) { return false; }

    if (current_month > birth_month) { return true; }
    if (current_month < birth_month) { return false; }
    if (current_day >= birth_day) { return true; }
    return false;
}

int main() {
    int today, n;
    cin >> today >> n;

    for (int i = 0; i < n; i++)
    {
        int date;
        cin >> date;

        if (is_18(today, date)) { cout << "YES" << endl; }
        else cout << "NO" << endl;
    }
}