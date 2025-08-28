//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski */

/* Zbirot na site cetificifreni broevi chii shto kvadrati se pogolemi od 2346643 */

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1000; i < 10000; i++)
    {
        if (i * i > 2346643)
        {
            sum += i;
        }
    }
    cout << "The sum of the numbers is: " << sum << endl;
    return 0;
}













