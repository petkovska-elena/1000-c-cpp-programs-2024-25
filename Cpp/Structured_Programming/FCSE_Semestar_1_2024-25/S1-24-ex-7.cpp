//
// Created by Elena Petkovska on 30.5.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма за пресметување и печатење на плоштината и периметарот на круг.
 * Радиусот на кругот се чита од стандарден влез (тастатура) како децимален број. */

/* Perimetar na krug: dijametar (2 * radius) * Pi;
 * Plostina na krug: radius * radius * Pi */

#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.1415926535;
    double radius;

    cout << "Vnesi go radiusot na krugot: " << endl;
    cin >> radius;

    double L = 2 * radius * PI;
    double P = radius * radius * PI;

    cout << endl;
    cout << "Perimetarot na krugot so radius " << radius << " e: " << L << endl;
    cout << "Plostinata na krugot so radius " << radius << " e: " << P << endl;

    cout << endl;
    cout << "Btw, I know the first 100 digitis of PI, hehhe: " << endl;
    cout << endl;
    cout << "3.1415926535 8979323846 2643383279 5028841971" << endl;
    cout << "  6939937510 5820974944 5923078164 0628620899" << endl;
    cout << "  8628034825 3421170679" << endl;

    return 0;
}