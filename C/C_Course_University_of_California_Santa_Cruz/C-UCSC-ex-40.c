// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Assert.c
 * use asserts within a trivial programm */

//NDEBUG goes before <assert.h >
//Program shows "Assertion failed: (0), function main, file ex-40.c, line 16." if NDEBUG is not defined
#define NDEBUG
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    assert(0);
    printf("My program runs.\n");
    return 0;
}