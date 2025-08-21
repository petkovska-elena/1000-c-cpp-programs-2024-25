// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>

int main (void){
    int celsius, fahrenheit;

    printf("Please enter Celsius as an integer number: ");

    scanf("%d", &celsius);
    //reverse note conversion (now from celsius to fahrenheit)
    fahrenheit = celsius * 1.8 + 32;

    printf("\n %d celsius is %d fahrenheit.\n", celsius, fahrenheit);
    return 0;
}