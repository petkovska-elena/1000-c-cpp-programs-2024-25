//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

int main() {
    int req_val;

    float i = 0, j = 0;
    cin >> req_val;

    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b ==0) break;
        if (a + b == req_val) j++;
        i++;
    }

    cout << "You entered " << j << " pairs of number that have a sum equal to " << req_val << endl;

    float percent = (j/i)*100.0;
    cout << "The percentage of pairs with sum " << req_val << " is " << percent << "%" << endl;
    return 0;
}