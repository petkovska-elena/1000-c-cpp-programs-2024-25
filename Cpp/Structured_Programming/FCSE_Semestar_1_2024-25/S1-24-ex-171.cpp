// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 3

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Vnesi dolzini na strani: " << endl;
    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout << "Ne moze da se konstruira triagolnik." << endl;
    else {
        if (a == b && b == c)
            cout << "Tragolnikot e ramnostran." << endl;
        else if (a == b || b == c || a == c)
            cout << "Tragolnikot e ravnokrak." << endl;
        else
            cout << "Tragolnikot e raznostran." <<endl;
        float p, s = (a + b + c) / 2;

        p = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Ploshtinata mu e :" << p;
    }
    return 0;
}
