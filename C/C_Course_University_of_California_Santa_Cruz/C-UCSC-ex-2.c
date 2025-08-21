// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>

int main (void){
    int fahrenheit, celsius;

    printf("Please enter Fahrenheit as an integer number: ");

    scanf("%d", &fahrenheit);
    //note conversion
    celsius = (fahrenheit - 32) / 1.8;

    printf("\n %d fahreheit is %d celsius.\n", fahrenheit, celsius);
    return 0;
}