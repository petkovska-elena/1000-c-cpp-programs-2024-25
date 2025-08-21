// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Peer-graded Assignment: Write a program that prints the sine function for an input x between (0, 1) */

#include <stdio.h>
#include <math.h>  // for sin()

int main(void)
{
    double x;

    printf("Enter a value for x (between 0 and 1): ");
    scanf("%lf", &x);

    // Check if x is in the valid range
    if (x > 0 && x < 1) {
        double result = sin(x);
        printf("sin(%lf) = %lf\n", x, result);
    } else {
        printf("Error: x must be strictly between 0 and 1.\n");
    }

    return 0;
}