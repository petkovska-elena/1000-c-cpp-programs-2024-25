//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

bool is_sweet(int n) {
    while (n > 0)
    {
        if (n % 10 % 2 != 0) { return false; }
        else { n /= 10; }
    }
    return true;
}

int main() {
    int start, end;
    bool found = false;
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        if (is_sweet(i))
        {
            cout << i;
            found = true;
            break;
        }
    }
    if (!found) { cout << "NSN"; }
    return 0;
}