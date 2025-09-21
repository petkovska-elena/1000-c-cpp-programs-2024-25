// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 5

#include <iostream>
using namespace std;

int main() {
    char znak;
    cout << "Enter a character: ";
    cin >> znak;

    switch (znak) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      cout << "Samoglaska: " << znak << endl;
        break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      cout << "Cifra: " << znak << endl;
        break;
    default:
        cout << "Vneseno e: " << znak << endl;
    }

    return 0;
}
