// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* The ADT List */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct list{ int data; struct list *next;} list;

int is_empty(const list *l){ return (l == NULL);}

void print_list(list *h, char *title)
{
    printf("%s\n", title);
    while (h != NULL)
    {
        printf ("%d :", h-> data);
        h = h -> next;
    }
}

int main()
{
    list list_of_int;
    list* head = NULL;
    head = malloc(sizeof(list));
    //Unsigned long
    printf("sizeof(list) = %lu\n", sizeof(list));

    head-> data=5;
    head -> next = NULL;

    print_list(head, "single element list");
    printf("\n\n");

    return 0;
}