//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 2 (16.10.2024) */

/* Од тастатура се внесуваат должини на три отсечки во произволен редослед.
 * Да се напише програма што ќе провери дали од отсечките може да се конструира триаголник,
 * при што ако може, да се провери дали истиот е правоаголен и да се пресмета неговата плоштина.
 * Во спротивно, треба да се испечатат соодветни пораки. */

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Vnesi gi dolzhinite na trite otsechki: " << endl;
    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout << "Ne mozhe da se konstruira triagolnik so ovie dolzhini na ostechki." << endl;
    else
    {
        if (a >= b)
        {
            float temp = a;
            a = b;
            b = temp;
        }

        if (a >= c)
        {
            float temp = a;
            a = c;
            c = temp;
        }

        if (b >= c)
        {
            float temp = b;
            b = c;
            c = temp;
        }

        if (c * c == a * a + b * b)
        {
            cout << "Triagolnikot e pravoagolen." << endl;
            cout << "Negovata ploshtina e: " << a * b / 2;
        }

        else
        {
            cout << "Triagolnikot ne e pravoagolen." << endl;
        }
    }

    return 0;
}

