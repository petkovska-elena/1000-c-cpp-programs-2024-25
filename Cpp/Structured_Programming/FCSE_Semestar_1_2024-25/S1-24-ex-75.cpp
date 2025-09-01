//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 2 - 29/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int P, Q, a;
    float b = 0, c = 0, d = 0;
    float pogolemo, pomalo, ednakvo;

    cin >> P >> Q;
    for (int i = 1; i <= P; i++)
    {
        cin >> a;
        if (a == Q) b++;
        else if (a > Q) c++;
        else d++;
    }

    pogolemo = (c / P) * 100;
    ednakvo = (b / P) * 100;
    pomalo = (d / P) * 100;

    cout << "Greater: " << pogolemo << "%" << endl;
    cout << "Equal: " << ednakvo << "%" << endl;
    cout << "Smaller: " << pomalo << "%" << endl;

    return 0;
}