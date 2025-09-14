// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski Vezhbi 2

#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Vnesete mala bukva: " << endl;
    cin >> c;
    cout << "Ovaa bukva golema se pishuva: " << char (c + ('A' - 'a')) << endl;
    return 0;
}
