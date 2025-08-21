// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>

int main(void)
{
    //Declare and initialize
    int a = 5, b = 7, c = 6;
    //Good practice
    double average = 0.0;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    //Conversion if 3
    average = (a + b + c) / 3.0;
    printf("average = %lf\n", average);
    return 0;
}