// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* If and relations and flow of control */

#include <stdio.h>

int main()
{
    int speed;
    printf("\nEnter your speed as an integer:");
    scanf("%d", &speed);

    if (speed < 65)
        printf("\nNo speeding Ticket\n\n");
    else
        printf("\nSpeeding Ticket\n\n");
    return 0;
}