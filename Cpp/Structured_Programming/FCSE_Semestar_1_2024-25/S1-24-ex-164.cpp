// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski Vezhbi 2

#include <iostream>
using namespace std;

int main() {
    int broj;
    cout << "Vnesete go brojot: ";
    cin >> broj;

    if (broj < 100 || broj > 1000)
    {
        cout << "Ve molam vnesete tricifren broj gospodine, dali me razbirate? " << endl;
        return 0;
    } else
    {
        cout << "Najznacajna cifra e: " << (broj / 100);
        cout << ", a najmalku znacajna cifra e " << (broj % 10);
    }
    return 0;
}
