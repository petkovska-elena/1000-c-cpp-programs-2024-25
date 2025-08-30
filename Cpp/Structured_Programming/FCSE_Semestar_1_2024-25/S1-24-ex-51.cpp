//
// Created by Elena Petkovska on 8.4.25.
//

/* Vezhbi Kolokvum 1 */

/* Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE. */

/* TO-DO Steps:
 * 1. Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
 * 2. Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
 * 3. да се најде и испечати најмалиот „благ број“.
 * 4. Ако не постои таков број, да се испечати NE. */

#include <iostream>
using namespace std;

bool e_blag_broj (int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit % 2 != 0)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;

    int blag_broj = -1;

    for (int i = m; i <= n; ++i)
    {
        if (e_blag_broj(i))
        {
            blag_broj = i;
            break;
        }
    }

    if (blag_broj != -1)
    {
        cout << blag_broj << endl;
    }
    else
    {
        cout << "NE" << endl;
    }

    return 0;
}
