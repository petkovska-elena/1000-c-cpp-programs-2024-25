// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski Vezhbi 2

#include <iostream>
using namespace std;

int main() {
    float radius;
    cin >> radius;

    float perimetar = 2 * radius * 3.14;
    float ploshtina = radius * radius * 3.14;

    cout << "L = " << perimetar << endl;
    cout << "P = " << ploshtina << endl;

    return 0;
}
