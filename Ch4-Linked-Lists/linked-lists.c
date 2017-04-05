#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Element {
    struct Element *next;
    void *data;
} Element;

/*
 * PROBLEM
 * Discuss the stack data structure. Implement a stack in C using either a linked list or a dynamic array, and justify your decision.
 * Design the interface to your stack to be complete, consistent, and easy to use.
 * 
 * The solution contains the following push, pop, createStack, and deleteStack functions.
 */
bool push (Element **stack, void *data){
    Element *elem = malloc(sizeof(Element));
    if (!elem) return false;
    elem->data = data;
    elem->next = *stack;
    *stack = elem;
    return true;
}

bool pop( Element **stack, void **data ) {
    Element *elem;
    if (!(elem=*stack)) return false;
    *data = elem->data;
    *stack = elem->next;
    free(elem);
    return true;
}

bool createStack( Element **stack ) {
    *stack = NULL;
    return true;
}

bool deleteStack ( Element **stack ){
    Element *next;
    while ( *stack ) {
        next = (*stack)->next;
        free (*stack);
        *stack = next;
    }
    return true;
}

/* 
 * PROBLEM
 * Find and fix the bugs in the following C function that is supposed to remove the head element from a singly linked list:
 * void removeHead (ListElement *head) {
 *   free(head); // Line 1
 *   head = head->next; // Line 2
 * }
 */
void removeHead (Element **head) {
    Element *temp;
    if (head && *head) {
        temp = (*head)->next;
        free (*head);
        *head = temp;
    }
}

/*
 * PROBLEM
 * Given a singly linked list, devise a tim- and space-efficient algorithm to find the mth-to-last element of the list. 
 * Implement your algorithm, taking care to handle relevant error conditions. Define th to last such that when m=0 the 
 * last element of the list is returned.
 */
Element *findMthToEndElement (Element *head, int m) {
    Element *current, *mBehind;
    int i;
    if (!head) {
        return NULL;
    }
    current = head;
    for (i=0;i<m;i++) {
        current = current->next;
        if (!(current->next)) {
            return NULL;
        }
    }
    mBehind = head;
    while(!(current->next)) {
        current = current->next;
        mBehind = mBehind->next;
    }
    return mBehind;
}
 
void main() {
}
