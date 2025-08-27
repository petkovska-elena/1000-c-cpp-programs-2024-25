//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 11 (18.12.2024) */

/* 1.2 Finding the min and max value in an array of pointers */

#include <iostream>
using namespace std;

void find_min_max (int arr[], int size, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }

        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}


int main()
{
    int array[100];
    int i, n;

    cin >> n;

    int min = 0, max = 0;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    find_min_max(array, n, &min, &max);

    cout << "Min value: " << min << endl;
    cout << "Max value: " << max << endl;
    return 0;
}