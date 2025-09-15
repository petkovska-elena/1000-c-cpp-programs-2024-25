// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezbi 3

#include <iostream>
using namespace std;

int main() {
    char ch;
    int rez;
    cout << "Vnesete znak: ";
    cin >> ch;
    rez = (ch >= 'a') && (ch <= 'z');
    //rez = (ch >= '0') && (ch <= '9');
    cout << rez;
    return 0;
}
