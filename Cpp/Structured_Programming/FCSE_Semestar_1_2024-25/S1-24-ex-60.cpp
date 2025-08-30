//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski 4 - 30/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        int tmp = i;
        int rev = 0;

        while (tmp>0)
        {
            int ld = tmp%10;
            rev = 10*rev + ld;
            tmp/=10;
        }

        if (i == rev){
            cout << i << endl;
            break;
        }

    }
}