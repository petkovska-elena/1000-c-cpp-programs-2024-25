// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Use of single arrays */

#include <stdio.h>

int main(void)
{
    const int SIZE = 5;

    int grades [SIZE]={78, 67, 92, 83, 88};
    double sum = 0.0;
    int i;

    printf("\nMy grades are:\n");

    for (i = 0; i < SIZE; i++)
        printf("%d\t", grades [i]);

    printf("\n\n");

    for (i = 0; i < SIZE; i++)
        sum = sum + grades[i];

    printf("My average is %.2f\n\n", sum/SIZE);

    return 0;
}