//
// Created by Elena Petkovska on 8.4.25.
//

/* Prezentacii Predavanja */

/* Povkuvanje na funkcijata sama sebesi; pecatenje na broevite nanazad */

#include <iostream>
using namespace std;

void Funk (int i)
{
    if (i > 0)
    {
        cout << i << " " << endl;
        Funk (i -1);
    }
}

int main()
{
    Funk(98);
    return 0;
}




