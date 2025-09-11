// Created by Elena Petkovska on 4.6.2025.
//

/* Ispit januari 2025 */

//Zadaca 1 Ispit januari

#include <iostream>
using namespace std;

void transform(int broj) {
    int niza_parni[100];
    int niza_neparni[100];

    int temp = broj;
    int counter_parni = 0;
    int counter_neparni = 0;
    int sum = 0;

    while (temp != 0)
    {
        int cifra = temp % 10;
        if (cifra % 2 == 0) { niza_parni[counter_parni++] = cifra; }
        else { niza_neparni[counter_neparni++] = cifra; }

        sum += cifra;
        temp /= 10;
    }

    for (int i = 0; i < counter_parni; i++) { cout << niza_parni[i] << " "; }
    cout << endl;

    for (int i = 0; i = counter_neparni; i--) { cout << niza_neparni[i] << " "; }
    cout << endl;
    cout << sum;
}

int main() {
    int n;
    cin >> n;

    transform(n);
    return 0;
}

/*
#include <iostream>
#include <cstring>
using namespace std;

void Transform(int br) {
    int nizaParni[100];
    int nizaNeparni[100];
    int temp = br;
    int counterParni = 0;
    int counterNeparni = 0;
    int sum = 0;

    while (temp != 0) {
        int cifra = temp % 10;
        if (cifra % 2 == 0) {
            nizaParni[counterParni++] = cifra;
        } else {
            nizaNeparni[counterNeparni++] = cifra;
        }
        sum += cifra;
        temp /= 10;
    }

    for (int i = 0; i < counterParni; i++) {
        cout << nizaParni[i] << " ";
    }
    cout << endl;

    for (int i = counterNeparni - 1; i >= 0; i--) {
        cout << nizaNeparni[i] << " ";
    }
    cout << endl;
    cout << sum;
}

int main() {
    int n;
    cin >> n;
    Transform(n);
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