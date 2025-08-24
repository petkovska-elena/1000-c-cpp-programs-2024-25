//
// Created by Elena Petkovska on 30.5.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма која од стандарден влез ќе прочита два цели броеви и ќе ја испечати на компјутерскиот екран
 * нивната сума, разлика, производ и остатокот при делењето. */

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    cout << endl;
    cout << "Sumata na broevite " << a << " i " << b << " e: " << a + b << endl;
    cout << "Razlikata na broevite " << a << " i " << b << " e: " << a - b << endl;
    cout << "Proizvodot na broevite " << a << " i " << b << " e: " << a * b << endl;
    cout << "Ostatokot pri delenje na broevite " << a << " i " << b << " e: " << a % b << endl;

    return 0;
}