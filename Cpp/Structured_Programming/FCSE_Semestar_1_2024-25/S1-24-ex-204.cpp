//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 6

/* Да се пресмета збирот: 1! + (1 + 2)! + (1 + 2 + 3)! + … + (1 + 2 + … + n)!
 * НАПОМЕНА: Користете функција за пресметување на збирот на првите k природни броеви
 * Користете функција за пресметување факториел на еден природен број k. */

#include <iostream>
using namespace std;

int suma (int n) {
    int s = 0;
    for (int i = 1; i <= n; ++i)
    {
        s += i;
    }
    return s;
}

int faktoriel (int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main() {
   int n;
   cin >> n;

    if (n > 0)
    {
        int result = 0;
        int s;
        for (int i = 1; i < n; ++i)
        {
            s = suma(i);
            result += faktoriel(s);
            cout << s << "! + ";
        }
        s = suma(n);
        result += faktoriel(s);
        cout << s << "! = " << result << endl;
    } else
    {
        cout << "Nevalidna vrednost" << endl;
    }
    return 0;
}
