// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 5

/* Да се напише програма што ќе ги испечати сите броеви од зададен опсег кои се читаат исто и одлево надесно и оддесно налево.
 * пример броеви
 * 12321 5061605 */

#include <iostream>
using namespace std;

int main() {
    int i, from, to, temp, op, digit;
    cin >> from >> to;

    for (i = from; i <= to; i++)
    {
        temp = i;
        op = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            op = op * 10 + digit;
            temp /= 10;
        }
        if (op == i)
        {
            cout << i << "\n";
        }
    }
    return 0;
}
