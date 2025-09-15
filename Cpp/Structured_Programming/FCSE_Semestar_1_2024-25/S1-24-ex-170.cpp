// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezbi 3

#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Vnesi gi dolzhinite na stranite: " << endl;
    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        cout << "Ne mozhe da se konstruira triagolnik. " << endl;
    } else
    {
        if (a >= b)
        {
            float temp = a;
            a = b;
            b = temp;
        }
        if (a >= c)
        {
            float temp = a;
            a = c;
            c = temp;
        }
        if (b >= c)
        {
            float temp = b;
            b = c;
            c = temp;
        }

        if (c * c == a * a + b * b)
        {
            cout << "Triagolnikot e pravoagolen. " << endl;
            cout << "Ploshtinata na triagolnikot e: " << a * b / 2;
        } else
        {
            cout << "Triagolnikot ne e pravoagolen." << endl;
        }
    }
    return 0;
}
