//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski 5 - 06/11/2024 */

#include <iostream>
using namespace std;

bool proverka (int k)
{
    int xy = k / 100;
    int zk = k % 100;
    if (k % (xy+zk) == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        if (proverka(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}