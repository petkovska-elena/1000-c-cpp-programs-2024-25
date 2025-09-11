// Created by Elena Petkovska on 4.6.2025.
//

/* Ispit januari 2025 */

//Zadaca 2 Ispit januari
//Simplified solution:

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int p, q;
    cin >> p >> q;
    int k = 0;

    while (true)
    {
        bool can_print = true;
        for (int i = -k; i <= k; i++)
        {
            int row = p + i;
            int left = q - (k - abs(i));
            int right = q + (k - abs(i));
            if (row < 0 || row >= m || left < 0 || right >= n)
            {
                can_print = false;
                break;
            }
        }
        if (!can_print) break;
        k++;
    }
    k--; //max romb size
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int dist_row = abs(i - p);
            int col_range = k - dist_row;

            if (dist_row <= k && abs(j - q) <= col_range)
            {
                cout << setw(3) << matrix[i][j];
            } else { cout << "   "; }
        }
        cout << endl;
    }
    return 0;
}

/* Way 2:
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[100][100];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int p, q;
    cin >> p >> q;
    int max_k = 0;

    while (true)
    {
        bool valid = true;
        for (int i = -max_k; i <= max_k; i++)
        {
            int row = p + i;
            int col_left = q - (max_k - abs(i));
            int col_right = q + (max_k - abs(i));
            if (row < 0 || row >= m || col_left < 0 || col_right >=n)
            {
                valid = false;
                break;
            }
        }
        if (!valid) break;
        max_k++;
    }

    max_k--;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int j = 0; j < n; j++)
            {
                int delta_row = abs(i - p);
                int max_col_offset = max_k - delta_row;

                if (delta_row <= max_k && abs(j - q) <= max_col_offset)
                {
                    cout << setw(3) << matrix[i][j];
                } else { cout << "   "; }
            }
        }
        cout << endl;
    }
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