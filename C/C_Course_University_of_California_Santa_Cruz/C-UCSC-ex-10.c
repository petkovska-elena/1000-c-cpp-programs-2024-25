// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>

int main(void)
{
    char c = 'a';
    printf("c in ASCI is %d\n", c);
    printf("c the character %c\n", c);
    printf("Three consecutive chars are: %c%c%c \n", c, c+1, c+2);
    printf("Three bell rings chars are: %c%c%c% \n", '\a', '\a', '\a');
    return 0;
}