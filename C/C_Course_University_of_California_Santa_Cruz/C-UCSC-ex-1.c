// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

//stdio.h - Standard Input Output Header
#include <stdio.h>

//VOID meaning: No arguments
int main (void)
{
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    //\n is being used to print in a new line, \n\n for two new lines
    //%lf (long float) is a format specifier for printing double
    printf ("\nA Marathon is %lf Kilometers.\n", kilometers);
    return 0;
}