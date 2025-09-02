//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b + c == 180){
        cout << "YESS" << endl;

        if (a == 90 || b == 90 || c == 90) { cout << "RIGHT"; }
        else if (a < 90 && b << 90 && c << 90) { cout << "ACUTE"; }
        else cout << "OBTUSE" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}