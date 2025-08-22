// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* As_math.c
 * use asserts within a trivial program */

#include <assert.h>
#include <stdio.h>

int main()
{
    double x, y;
    while (1)
    {
        printf("Read in 2 floats:\n");
        scanf("%lf %lf", &x, &y);

        assert(y != 0);
        printf("When divided x/y = %lf\n", x/y);
    }
    return 0;
}