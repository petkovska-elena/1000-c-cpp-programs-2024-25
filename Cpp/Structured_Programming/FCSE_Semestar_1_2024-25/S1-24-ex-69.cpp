//
// Created by Elena Petkovska on 8.4.25.
//

/* Course C++ */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x = 95000;

    float state_tax = (95000.00 / 100) * 4;
    float country_tax = (95000.00 / 100) * 2;

    cout << fixed << setprecision(2);
    cout << "The state tax is: " << state_tax << endl;
    cout << "The country tax is: " << country_tax << endl;
    cout << "The total price of the product is:";
    cout << x + state_tax + country_tax << " dollars" << endl;

    return 0;
}