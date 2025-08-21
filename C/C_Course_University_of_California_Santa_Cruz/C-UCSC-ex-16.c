// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Logical operators and short circuit evaluation */

#include <stdio.h>

int main()
{
    int outside, weather;
    printf("\nEnter if you're outside 1 true 0 false:");
    scanf("%d", &outside);

    printf("\nEnter if there's rain 1 true 0 false:");
    scanf("%d", &weather);

    if (outside && weather)
        printf("\nPlease get an umbrella.\n");
    else
        printf("\nDress normally.\n\n");
    return 0;
}