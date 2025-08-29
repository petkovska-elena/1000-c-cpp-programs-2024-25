//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 16/12/2024 */

/* Write a program that reads a number N,
 * where N represents the size of an array.
 * The array contains the numbers from 1 to N in sequential order.
 * The program should calculate the sum of all even numbers in the array using recursion. */

#include <iostream>
using namespace std;

int sum_even (int N)
{
    if (N == 0) return 0;
    if (N % 2 == 0) return N + sum_even(N-1);
        else return sum_even(N-1);
}

int main()
{
    int N;
    cin >> N;

    if (N < 0) { cout << "Invalid case. Enter a number which i larger than 0."; }
    else { cout << "Sum of even numbers is: " << sum_even(N) << endl; }

    return 0;
}