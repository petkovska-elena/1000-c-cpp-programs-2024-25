//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 2 (16.10.2024) */

/* Од тастатура се внесуваат координати на една точка од рамнина.
 * Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка. */

#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Vnesete koordinatite. Vnesete ja vrednosta na x: ";
    cin >> x;

    cout << "Super, vnesete ja sega vrednosta na y: ";
    cin >> y;

    cout << "Tockata vo ramninata ima koordinati: (" << x << "," << y << ")" << endl;

    cout << "Spored ova, tockata se naogja vo ";
    if (x >= 0 && y >= 0) { cout << "Prviot kvadrant." << endl; }
    else if (x <= 0 && y >= 0) { cout << "Vtoriot kvadrant." << endl; }
    else if (x <= 0 && y <= 0) { cout << "Tretiot kvadrant." << endl; }
    else if (x >= 0 && y <= 0) { cout << "Cetvrtiot kvadrant." << endl; }

    return 0;
}