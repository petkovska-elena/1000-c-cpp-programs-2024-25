// Created by Elena Petkovska on 5.4.2025.
//

/* Cpp Course University of California Santa Cruz */

/* Some C++ easy to use features
 * use auto internsal declaration and for(int i) */

#include <iostream>
using namespace std;

long long fact(int n)
{
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main(void)
{
    cout << "\nThis program uses some features not in C89\n\n";

    for (auto i = 0; i < 16; i++)
    {
        cout << "factorial of " << i << " is " << fact(i) << endl;
    }
    cout << "\nThat's all folks!" << endl;
}