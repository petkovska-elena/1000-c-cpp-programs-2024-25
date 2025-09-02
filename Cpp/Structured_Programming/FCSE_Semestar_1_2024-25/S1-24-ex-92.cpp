//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

// Function: isInteresting(n)
bool is_interesting(int n) {
    int digits = 0, flipped = 0;
    while (n > 0) {
       flipped = flipped * 10 + n % 10;
        n /= 10;
        digits++;
    }
    return (flipped % digits == 0);
}

// Main Program:
// 1. Read n
int main () {
    int n, max_int = 0;
    cin >> n;

    // 2. If n < 10 → print "The number is invalid", exit
    if (n < 10)
    {
        cout << "The number is invalid" << endl;
        return 1;
    }

    // 3. Loop i from 9 to n - 1:
    for (int i = 9; i < n; i++)
    {
        if (is_interesting(i) && i >= max_int)
        {
            //a. If isInteresting(i) and i ≥ current max → update max
            max_int = i;
        }
    }
    cout << max_int; // 4. Print the largest interesting number found
    return 0;
}





