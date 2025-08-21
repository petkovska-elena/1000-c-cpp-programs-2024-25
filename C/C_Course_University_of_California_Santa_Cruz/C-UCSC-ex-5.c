// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

//Modify the prevous program instead to input miles and yards and make a general conversion to kilometers.
#include <stdio.h>

int main (void){
    int miles, yards;
    double kilometers;

    printf("Please enter an integer number of miles: ");
    scanf("%d", &miles);
    printf("Please enter an integer number of yards: ");
    scanf("%d", &yards);

    kilometers = miles * 1.609344;
    printf("\n%d miles is %lf kilometers.\n", miles, kilometers);

    kilometers = yards * 0.0009144;
    printf("\n%d yards is %lf kilometers.\n", yards, kilometers);

    return 0;
}