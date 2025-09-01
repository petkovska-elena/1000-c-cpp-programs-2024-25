//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski zadaci (Testovi) */

#include <iostream>
using namespace std;

void f(int x, int* y) {
    (*y) /= 2;
    x *= 2;
}

int main() {
    int x = 2, y = 2;
    f(x, &y);
    f(y, &x);

    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}