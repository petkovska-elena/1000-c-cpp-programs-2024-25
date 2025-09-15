// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 4

#include <iostream>
using namespace std;

int main() {
    int i = 10, sum = 0;

    while (i <= 98)
    {
        sum = sum + i;
        i += 2;
    }
    cout << sum << endl;
    return 0;
}
