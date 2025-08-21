// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Write a C program that has a function that prints a table of values for sine and cosine between (0, 1). Upload your program as a text file. */

#include <stdio.h>
#include <math.h>

void print_table () {
    printf("x      sin(x)          cos(x)\n");

    for (int i = 0; i <= 100; i++)
    {
        double x = i / 100.0;
        double sine = sin (x);
        double cosine = cos (x);
        printf("%.2lf   %.10lf    %.10lf\n", x, sine, cosine);
    }
}

int main(void)
{
    print_table();
    return 0;
}
