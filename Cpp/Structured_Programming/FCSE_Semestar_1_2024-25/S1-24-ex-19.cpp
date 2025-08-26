//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 2 (16.10.2024) */

/* Од тастатура се внесуваат должини на три отсечки во произволен редослед.
 * Да се провери дали од дадените отсечки може да се конструра триаголник.
 * Ако може, да се испечати дали триаголникот е разностран, рамностран или
 * рамнокрак и да му се пресмета плоштината. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Vnesete gi dolzhinite na trite otsecki: " << endl;
    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        cout << "Batko, ne mozhe da se konstruira triagolnik so ovie otsechki!" << endl;
    }
    else
    {
        if (a == b && b == c)
        {
            cout << "Triagolnikot e ramnostran." << endl;
        }
        else if (a == b || a == c || b == c)
        {
            cout << "Triagolnikot e ramnokrak." << endl;
        }
        else
        {
            cout << "Triagolnikot e raznostran." << endl;
        }

        //Presmetuvanje na ploshtinata na triagolnikot
        float P, s = (a + b + c) / 2;
        P = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Plostinata na triagolnikot e: " << P << endl;
    }

    return 0;
}