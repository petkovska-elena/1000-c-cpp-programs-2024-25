// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>

int main(void)
{
    int repeat = 0;
    printf("How strong is your love 1-10? : ");
    scanf("%d", &repeat);

    printf("\nI love you very");
    while (repeat > 0)
    {
        printf("\n very");
        repeat--;
    };

    printf(" much.\n\n");
    return 0;
}