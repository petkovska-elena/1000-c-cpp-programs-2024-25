// Created by Elena Petkovska on 5.4.2025.
//

/* Cpp Course University of California Santa Cruz */

/* Converting a C Program to C++ */

//The C Program
/* #include <stdio.h>
 * #include <stdio.h>
 * #include <time.h>
 *
 * #define SIDES 6
 * #define R_SIDE (rand() % SIDES + 1)
 *
 * srand (clock());
 * printf("\nEnter number of trials: ");
 * scanf("%d", &trials);
 *
 * for (j = 0; j < trials; ++j)
 *   outcomes[(d1 = R_SIDE) + (d2 = R_SIDE)]++;
 * printf("probability\n")
 *
 * for (j = 2; j < n_dice * SIDEs + 1; ++j)
 *   printf( "j = %d p = %lf\n", j,
 *     (double)(outcomes[j]/trials);
 * } */

//The following program computes the probability for dice possibilities

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int sides = 6;
inline int r_side(){ return (rand() % sides + 1); }

int main(void)
{
    const int n_dice = 2;
    int d1, d2;

    srand(clock());
    cout << "\nEnter the number of trials: ";

    int trials;
    cin >> trials;

    int * outcomes = new int [n_dice * sides + 1];

    for (int j = 0; j < trials; ++j)
        outcomes[(d1 = r_side()) + (d2 = r_side())]++;

    cout << "probability\n";

    for (int j = 2; j < n_dice * sides + 1; ++j)
        cout << "j = " << j << " p = "
             << static_cast<double>(outcomes[j]) / trials
             << endl;
}