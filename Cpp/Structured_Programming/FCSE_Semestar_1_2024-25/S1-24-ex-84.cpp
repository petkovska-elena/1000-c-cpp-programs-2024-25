//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski zadaci (Testovi) */

#include <iostream>
using namespace std;

void num(int x) {
    cout << x << " ";
    if (x)
        num(x / 10);
    cout << x << " ";
}

int main() {
    num(543);
    return 0;
}