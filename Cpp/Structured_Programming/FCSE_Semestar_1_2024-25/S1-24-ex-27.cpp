//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 11 (18.12.2024) */

/* Да се напише програма која за дадена низа од цели броеви
 * (која што се внесува од тастатура) ќе го отпечати најголемиот елемент.
 * Програмата треба да содржи рекурзивна функција за
 * наоѓање на најголем елемент во дадена низа */

#include <iostream>
using namespace std;

int max_element(int a[], int n)
{
    if (n == 0)
    {
        return a[0]; //Base case: If there is only one element, return it
    }

    int max = max_element(a, n-1);

    if (a[n] > max)
    {
        return a[n]; //Update max if the current element is greater
    }

    return max;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n]; //Declare an array of size n
    cout <<"Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "The maximum element is: " << max_element(a, n - 1) << endl;
    return 0;
}