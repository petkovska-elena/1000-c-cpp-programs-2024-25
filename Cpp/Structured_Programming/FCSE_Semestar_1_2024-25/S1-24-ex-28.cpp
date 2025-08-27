//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 11 (18.12.2024) */

/* Swap with pointers */

#include <iostream>
using namespace std;

//Swap function with pointers
void swap (int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap (&x, &y); //Pass the address of x and y

    cout << "After swap: y = " << x << ", y = " << y << endl;
    return 0;
}