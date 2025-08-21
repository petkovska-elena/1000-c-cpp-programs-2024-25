// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Recursive v/ Iterative Fibonacci - Simple Recursion */

#include <stdio.h>

long fibonacci(int n)
{
    long f2 = 0, f1 = 1, f_old;
    int i;

    for (i = 0; i < n; i++)
    {
        f_old = f2;
        f2 = f2 + f1;
        f1 = f_old;
    }
    return f2;
}

long recursive_fibonacci(int n)
{
    if (n <= 1)
        return n;
    else return(recursive_fibonacci(n-1) + recursive_fibonacci(n-2));
}

int main(void)
{
    int how_many = 0, i;

    printf("I want table of fibonacci up to n:");
    scanf("%d", &how_many);

    printf("\nFibonacci\n");

    for (i = 0; i<how_many; i++)
        printf("\n%d\t %ld %ld\n", i, fibonacci(i), recursive_fibonacci(i));

    return 0;
}