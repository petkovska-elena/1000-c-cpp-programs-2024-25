//
// Created by Elena Petkovska on 30.5.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма која за дадени страни на еден разностран триаголник
 * ќе ги отпечати на екран периметарот и квадратот од плоштината
 * (нека се работи со a = 5, b = 7.5, c = 10.2). */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a = 5;
    float b = 7.5;
    float c = 10.2;
    float L = a + b + c;
    float s = L / 2;
    float P = sqrt(s * (s-a)*(s-b)*(s-c));

    cout << "Perimetarot na triagolnikot e: " << L << endl;
    cout << "Plostinata na triagolnikot e: " << P << endl;
    cout << "Kvadratot od plostinata na triagolnikot e: " << P * P << endl;
    return 0;
}