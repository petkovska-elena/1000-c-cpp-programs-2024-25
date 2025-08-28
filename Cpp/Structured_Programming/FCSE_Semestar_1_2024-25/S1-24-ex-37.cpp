//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski */

/* Given a positive integer N, print a pyramid pattern of N rows using *.
 * For example, if N = 3, the output should be: */

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter a positive integer N: " << endl;
    cin >> N;

    for (int i = 1; i <=N; i++){
        for (int j = 1; j <= N - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

