// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski Vezhbi 2

#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Vnesete golema bukva: " << endl;
    cin >> c;
    cout << "Ovaa bukva mala se pishuva: " << char (c + ('a' - 'A')) << endl;
    return 0;
}
