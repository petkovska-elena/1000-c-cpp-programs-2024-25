// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

//Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број.
//За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број
//и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри).

#include<iostream>
using namespace std;

int main() {
    int n, prethodna_cifra = 0;

    while(cin >> n) {
        if (n <= 0) break;

        int zbir = 0, temp = n, max_cifra = 0;

        while(temp > 0) {
            const int cifra = temp % 10;
            if(cifra > max_cifra) max_cifra = cifra;
            zbir = zbir + cifra;
            temp /= 10;
        }
        zbir += prethodna_cifra;
        prethodna_cifra = max_cifra;
        cout << n << ": " << zbir << endl;
    }
    return 0;
}