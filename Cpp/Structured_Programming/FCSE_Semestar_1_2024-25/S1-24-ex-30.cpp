//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski */

/*  На стандардниот излез да се отпечатат во опаѓачки редослед сите петцифрени броеви
 *  кои се деливи со бројот 625. Секој број што го задоволува условот се печати во нов ред. */

#include <iostream>
using namespace std;

int main()
{
    for (int i = 99999; i >= 10000; i--)
    {
        if (i % 625 == 0){ cout << i << endl;}
    }

    return 0;
}

