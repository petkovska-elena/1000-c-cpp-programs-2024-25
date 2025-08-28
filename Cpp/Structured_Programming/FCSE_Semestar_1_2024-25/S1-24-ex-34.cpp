//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski */

/* Read an array of 10 integers and count how many
 * of them are even and how many are odd. Print the counts. */

#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int even = 0; int odd = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
    return 0;
}
