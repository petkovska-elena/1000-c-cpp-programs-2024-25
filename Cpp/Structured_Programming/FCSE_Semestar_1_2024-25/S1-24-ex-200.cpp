// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 6

/* Да се напишат соодветни функции за пресметување на дијаметар, периметар и плоштина на круг чиј што радиус се предава како аргумент.
 * Потоа да се напише и програма во која за внесен (од тастатура) радиус ќе се повикаат овие функции за да се пресметаат дијаметарот,
 * периметарот и плоштината на соодветниот круг. */

#include <iostream>
#include <iomanip>
#define PI 3.14

using namespace std;

double dijametar(double radius) {
    return 2 * radius;
}

double perimetar(double radius) {
    return 2 * radius * PI;
}

double ploshtina(double radius) {
    return radius * radius * PI;
}

int main() {
    double radius, D, L, P;
    cout << "Vnesete radius na krugot: ";
    cin >> radius;

    D = dijametar(radius);
    L = perimetar(radius);
    P = ploshtina(radius);

    cout << "Dijametar na krugot = " << fixed << setprecision(2) << D << endl;
    cout << "Perimetar na krugot = " << fixed << setprecision(2) << L << endl;
    cout << "Ploshtina na krugot = " << fixed << setprecision(2) << P << endl;
    return 0;
}
