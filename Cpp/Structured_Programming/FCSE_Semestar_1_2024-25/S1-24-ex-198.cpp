// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 6

#include <iostream>
using namespace std;

double kub (int x) {
    return x * x * x;
}

int main() {
    int n;
    cout << "Vnesete eden priroden broj: ";
    cin >> n;
    double rezultat = kub(n);

    cout << "Kubot na brojot " << n << " e " << rezultat << endl;
    return 0;
}
