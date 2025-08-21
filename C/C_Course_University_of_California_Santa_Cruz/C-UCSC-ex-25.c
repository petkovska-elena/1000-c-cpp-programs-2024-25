// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>

int main(void)
{
    int repeat;

    printf("How strong is your love 0-10? :");
    scanf("%d", &repeat);

    if (repeat > 0)
    {
        printf("\nI love you");

        while (repeat > 0){
            printf("\n  very");
            repeat--;
        }

        printf(" much.\n\n");
    }

    else
    {
        int repeat = 1000000000;
        while (repeat > 0){
            printf("\nGO TO HELL.");
            repeat--;
        }
    }

    return 0;
}