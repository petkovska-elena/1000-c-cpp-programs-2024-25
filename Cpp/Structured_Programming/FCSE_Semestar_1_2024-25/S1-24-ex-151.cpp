// Created by Elena Petkovska on 4.6.2025.
//

/* Ispit januari 2025 */

//Zadaca 3 Ispit januari

#include <iostream>
using namespace std;

int main() {
    char niza[100];
    scanf("%s", niza);
    int n = strlen(niza);

    for (int k = 0; k < n; k++)
    {
        if (tolower(niza[k]) == 's')
        {
            niza[k] = '$';
        } else if (tolower (niza[k]) == 'm')
        {
            for (int j = n + 1; j >= k; j--)
            {
                niza[j] = niza[j -1];
            }
            niza[k] = '^';
            n++;
            k++;
        }
    }

    cout << niza << endl;
    return 0;
}

/* // Problem 3
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char niza[100];
    scanf("%s", niza);
    int n = strlen(niza);

    for (int k = 0; k < n; k++) {
        if (tolower(niza[k]) == 's') {
            niza[k] = '$';
        } else if (tolower(niza[k]) == 'm') {
            for (int j = n + 1; j >= k; j--) {
                niza[j] = niza[j - 1];
            }
            niza[k] = '^';
            n++;
            k++;
        }
    }

    cout << niza << endl;
    return 0;
} */

/* MUST-KNOW TOPICS for Structured Programming Exam

1. // - Digit Processing
   // - Extract digits using % and /
   // - Separate even/odd, store in arrays
   // - Reverse or print in order, calculate sum

2. // -  2D Matrix Traversal
   // - Work with matrix[i][j]
   // - Navigate based on pivot (row, col)
   // - Validate bounds and simulate shapes (diamond, cross, quadrants)

3. // - String & Character Manipulation
   // - Iterate through char arrays (niza[i])
   // - Replace or insert characters
   // - Shift elements for insertion
   // - Use tolower() for case-insensitive checks

4. // - Core Skills
   // - Loops (for, while), Conditions (if)
   // - Array indexing, counters
   // - Boundary checks to avoid overflow
   // - Output formatting with setw(), endl

// Practice: digits, arrays, matrices, pivots, string edits */
