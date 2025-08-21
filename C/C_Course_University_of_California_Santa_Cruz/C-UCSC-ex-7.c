// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Expression Evaluation */

#include <stdio.h>

int main(void)
{
    //Initialize the values
    int a = 5, b = 7, c = 0, d = 0;
    c = a - b;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = a / b; d = b / a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = a % b; d = b % a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = -a - b; d = -b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = ++a + b++; d +=5;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    return 0;
}