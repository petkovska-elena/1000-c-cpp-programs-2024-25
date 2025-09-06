// Created by Elena Petkovska on 4.6.2025.
//

/* Courses FINKI 2024/25 - Zadachi za vezhbanje za 1 kolokvium */

/* TO-DO Steps:
* 1. Од стандарден влез се читаат знаци се додека не се прочита извичник ('!').
* 2. Во така внесениот текст се кријат цели броеви (помали од 100).
* 3. Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
* 4. Забелешка: cin во C++ ги игнорира празните места (space). За да не ги игнорира, потребно е да се додаде noskipws пред читањето на знакот.
*
* For Example:
* Input:
* ako34D  neka12em  bashka41mewr20!
* Result:
* 107 */

#include <iostream>
using namespace std;

int main() {
    char znak;
    int zbir = 0;

    while (cin >> noskipws >> znak)
    {
        if (znak == '!') break;
        if (znak >= '0' && znak <= '9')
        {
            int broj = znak - '0';
            while (cin >> noskipws >> znak && znak >= '0' && znak <= '9')
            {
                broj = broj * 10 + znak - '0';
            }
            if (broj < 100) zbir = zbir + broj;
        }
    }

    cout << zbir;
    return 0;
}