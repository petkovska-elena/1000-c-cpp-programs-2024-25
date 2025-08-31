//
// Created by Elena Petkovska on 8.4.25.
//

/* Course C++ */

#include <iostream>
using namespace std;

int main() {
    float x;
    float y;
    float z;

    cout << "Abe zdravo batko. Aj vnesi go x:";
    cin >> x;

    cout << "Vnesi go y:";
    cin >> y;

    cout << "Bravo be batko be! Sega ke go presmetam rezultatot za z!" << endl;

    z = (x + 10) / (3 * y);

    cout << "Eve na:" << endl;
    cout << z << endl;

    return 0;
}