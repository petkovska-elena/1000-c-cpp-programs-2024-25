// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

//a e pogolem, b e pomal
//treba sekoja cifra na b da se naoga na parna pozicija vo brojot a

#include <iostream>
using namespace std;

bool e_paren_ekvivalent (int a, int b) {
    while (b > 0)
    {
        int cifra = b % 10;
        if (cifra != a / 10 % 10) { return false; }
        b = b / 10;
        a = a / 100;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    if( a <= 0 || b <= 0 ) {
        cout<<"Invalid input\n";
        return 1;
    }
    if(b>a) {
        swap(a,b);
    }
    (e_paren_ekvivalent(a, b))?cout<<"PAREN\n":cout<<"NE\n";
}