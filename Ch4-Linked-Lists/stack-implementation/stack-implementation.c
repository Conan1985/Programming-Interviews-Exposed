/*
 * PROBLEM
 * Discuss the stack data structure. Implement a stack in C using either a linked list or a dynamic array, and justify your decision.
 * Design the interface to your stack to be complete, consistent, and easy to use.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Element {
    struct Element *next;
    void *data;
} Element;

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

void main() {
}