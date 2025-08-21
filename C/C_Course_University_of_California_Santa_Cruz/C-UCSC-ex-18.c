// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, letters = 0, others = 0;
    //Use for int value of character
    int c;
    //EOF - End of File
    while ((c = getchar()) != EOF )
    {
        if (c == ' ' )
            ++blanks;
        else if ( c >= '0' && c <= '9')
            ++digits;
        //&& - and; || - or
        else if ( c>= 'a' && c <= 'z' || c>= 'A' & c<= 'Z')
            ++letters;
        else
            ++others;
    }

    printf(" blanks = %d, digits = %d, letters = %d,", blanks, digits, letters);
    printf(" others = %d\n\n", others);
    return 0;
}