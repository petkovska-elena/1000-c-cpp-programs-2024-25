//
// Created by Elena Petkovska on 8.4.25.
//

/* Course C++ */

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cin >> a >> b;

    temp = a;

    a = b;
    b = temp;

    cout << a;
    return 0;
}


