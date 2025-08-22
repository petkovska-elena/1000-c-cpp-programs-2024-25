// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>

enum month{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

enum month get_month(enum month m)
{
    return(m);
}

int main()
{

    printf("%u\n", get_month(apr));

    return 0;
}