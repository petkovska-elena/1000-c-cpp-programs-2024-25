// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 4

#include <iostream>
using namespace std;

int main() {
    int counter = 0, n;
    float x, y = 1;
    cout << "x: ";
    cin >> x;

    cout << "n: ";
    cin >> n;

    do
    {
        y *= x;
        counter++;
    } while (counter < n);
    {
        cout << x << "^" << n << " = " << y << endl;
    }
    return 0;
}
