// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50
#define NUM_ELEMENTS 10

// Struct for an element
typedef struct Element {
    char name[MAX_LEN];
    char symbol[MAX_LEN];
    float atomic_weight;
    struct Element* next;
} Element;

// Function to create a new node
Element* create_element(const char* name, const char* symbol, float weight) {
    Element* new_elem = (Element*)malloc(sizeof(Element));
    if (new_elem == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    strncpy(new_elem->name, name, MAX_LEN);
    strncpy(new_elem->symbol, symbol, MAX_LEN);
    new_elem->atomic_weight = weight;
    new_elem->next = NULL;
    return new_elem;
}

// Function to append to the list
void append(Element** head, Element* new_elem) {
    if (*head == NULL) {
        *head = new_elem;
        return;
    }

    Element* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_elem;
}

// Function to print all elements
void print_elements(Element* head) {
    printf("\n%-3s %-20s %-10s %-10s\n", "No", "Name", "Symbol", "Atomic wt.");
    printf("----------------------------------------------------\n");
    int index = 1;
    while (head != NULL) {
        printf("%-3d %-20s %-10s %-10.3f\n", index, head->name, head->symbol, head->atomic_weight);
        head = head->next;
        index++;
    }
}

// Free memory
void free_list(Element* head) {
    while (head != NULL) {
        Element* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Element* head = NULL;

    printf("Enter information for the first 10 elements (Name Symbol Atomic_Weight):\n");

    for (int i = 0; i < NUM_ELEMENTS; i++) {
        char name[MAX_LEN], symbol[MAX_LEN];
        float weight;

        printf("Element %d:\n", i + 1);
        printf("  Name: ");
        scanf("%s", name);
        printf("  Symbol: ");
        scanf("%s", symbol);
        printf("  Atomic weight: ");
        scanf("%f", &weight);

        Element* new_elem = create_element(name, symbol, weight);
        append(&head, new_elem);
    }

    print_elements(head);
    free_list(head);

    return 0;
}