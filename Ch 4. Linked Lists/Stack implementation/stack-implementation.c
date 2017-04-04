/*
 * PROBLEM
 * Discuss the stack data structure. Implement a stack in C using either a linked list or a dynamic array, and justify your decision.
 * Design the interface to your stack to be complete, consistent, and easy to use.
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    typedef struct Element {
        struct Element *next;
        void *data;
    } Element;

    void push( Element **stack, void *data );
    void *pop( Element **stack );


    return 0;
}
