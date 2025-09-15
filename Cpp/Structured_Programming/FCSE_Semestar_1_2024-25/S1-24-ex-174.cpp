// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 3

#include <iostream>
using namespace std;

int main() {
    int godina;

    cout << "Vnesi godina: \n";
    cin >> godina;

    if ((godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0) {
        cout << godina << " e prestapna. \n";
    } else
    {
        cout << godina << " ne e prestapna. \n";
    }
    return 0;
}
