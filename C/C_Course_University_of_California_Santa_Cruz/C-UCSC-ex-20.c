// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, total_chars = 0;
    //Use for int value character
    int c;
    for (; (c = getchar()) != EOF; total_chars++)
    {
        if (c == ' ')
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++digits;
    };

    printf(" blanks = %d, digits = %d, total_chars = %d\n\n", blanks, digits, total_chars);
    return 0;
}
