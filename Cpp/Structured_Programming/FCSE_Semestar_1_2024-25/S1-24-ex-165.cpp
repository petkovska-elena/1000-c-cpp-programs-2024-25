// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski Vezhbi 2

#include <iostream>
using namespace std;

int main() {
    long int datum;
    int den, mesec;

    cout << "Vnesete datum na ragjanje vo format ddmmgggg: ";
    cin >> datum;
    den = datum / 1000000;
    mesec = (datum / 10000) % 100;
    cout << "Vashiot datum na ragjanje e: " << den << "." << mesec;
    return 0;
}
