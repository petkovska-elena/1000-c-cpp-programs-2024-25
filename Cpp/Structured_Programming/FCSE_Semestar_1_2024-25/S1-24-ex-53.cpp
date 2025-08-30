//
// Created by Elena Petkovska on 8.4.25.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char niza[100];
    int pozicii[10] = {0};

    while (cin.getline(niza, 100))
    {
        if (niza[0] == '#')
        {
            break;
        }

        for (int i = 0; i < strlen(niza); i++)
        {
            if (isdigit(niza[i]))
            {
                int mesto = niza[i] - '0';
                pozicii[mesto]++;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << ":" << pozicii[i] << endl;
    }
    return 0;
}

