// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Function varables with call-by-vaue:
* When you pass a variable (like k) to a function in C, a copy of the variable’s value is made.
Any changes to the parameter inside the function do not affect the original variable outside the function. */

#include <stdio.h>

int footbar(int n) {
    n = n + 1;
    return n;
}

int main(void)
{
    int k = 6;
    printf("footbar(k) = %d, k = %d\n", footbar(k), k);
}