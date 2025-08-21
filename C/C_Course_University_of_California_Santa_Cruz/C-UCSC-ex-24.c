// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* number of fct calls */
#define NCALLS  1000
/* number of columns */
#define NCOLS   7
/* number of lines */
#define NLINES  7

int main(void)
{
    int i, val;
    long begin, diff, end;

    // start time
    begin = time(NULL);
    // seed random number generator
    srand(time(NULL));

    printf("\nTIMING TEST: %d calls to rand()\n\n", NCALLS);

    for (i = 1; i <= NCALLS; ++i) {
        val = rand();

        if (i <= NCOLS * NLINES) {
            printf("%7d", val);
            if (i % NCOLS == 0)
                putchar('\n');
        }
        else if (i == NCOLS * NLINES + 1)
            printf("%7s\n", ".....");
    }

    // end time
    end = time(NULL);
    diff = end - begin;

    printf("%s%ld\n%s%ld\n%s%ld\n%s%.10f\n",
           "end time: ", end,
           "begin time: ", begin,
           "elapsed time: ", diff,
           "time for each call: ", (double) diff / NCALLS);

    return 0;
}