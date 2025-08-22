// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Enumerated Types */

#include <stdio.h>

//Declare type
enum day {mon, tue, wed, thu, fri, sat, sun};

void print_day(enum day d)
{
    switch (d)
    {
    case mon: printf("monday"); break;
    case tue: printf("tuesday"); break;
    case wed: printf("wednesday"); break;
    case thu: printf("thursday"); break;
    case fri: printf("friday"); break;
    case sat: printf("saturday"); break;
    case sun: printf("sunday"); break;
    default: printf("%d is an error", d);
    }
}

enum day next_day(enum day d)
{
    return(d + 1 % 7);
}

int main()
{
    enum day today = fri;
    print_day(today);
    printf("\n\n");
    print_day(7);
    printf("\n\n");
    print_day(next_day(today));
    printf("\n\n");
    return 0;
}