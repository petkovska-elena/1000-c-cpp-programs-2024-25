// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>
#include <stdlib.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
    double interval;
    int i;
    for(i = 0; i <30; i++)
    {
        interval = i/10.0;
        printf("\nsin( %lf ) = %lf \t", interval, fabs(sin(interval)));
    }

    printf("\n+++++++\n");
    return 0;
}