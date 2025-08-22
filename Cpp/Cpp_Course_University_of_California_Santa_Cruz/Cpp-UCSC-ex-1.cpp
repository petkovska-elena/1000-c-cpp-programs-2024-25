// Created by Elena Petkovska on 5.4.2025.
//

/* Cpp Course University of California Santa Cruz */

/* Miles are converted to Kilometers
 * First use of C++ */

#include <iostream>
using namespace std;
const double m_to_k = 1.609;

inline double convert (int mi){ return (mi * m_to_k); }

int main(void)
{
    int miles = 1;

    while (miles != 0)
    {
        cout << "Input distance in miles or 0 to terminate: ";
        cin >> miles;

        cout << "\nDistance is " << convert(miles) << " km." << endl;
    }

    cout <<endl;
}