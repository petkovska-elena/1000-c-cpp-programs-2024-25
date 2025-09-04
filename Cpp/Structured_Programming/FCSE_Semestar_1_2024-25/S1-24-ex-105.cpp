// Created by Elena Petkovska on 4.6.2025.
//

/* Kolokvium 1 zadaci - MKD */

#include <iostream>
using namespace std;

int main() {
    int z, a, b;
    cin >> z;

    float i = 0;
    float j = 0;

    while (cin >> a >> b)
    {
        if (a == 0 && b == 0){ break; }
        else
        {
            const int temp_zbir = a + b;
            if (temp_zbir == z){ i++; }
        }
        j++;
    }

    const float procent = (i / j) * 100.0;

    if (i == 1) { cout << "Vnesovte 1 par broevi cij zbir e " << z << endl; }
    else {
    cout << "Vnesovte " << i << " parovi broevi cij zbir e " << z << endl;
    }
    cout << "Procentot na parovi so zbir " << z << " e " << procent << "% " << endl;
    return 0;
}
