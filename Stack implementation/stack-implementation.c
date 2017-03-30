/*
 * PROBLEM
 * Discuss the stack data structure. Implement a stack in C using either a linked list or a dynamic array, and justify your decision. 
 * Design the interface to your stack to be complete, consistent, and easy to use.
 */

#include <stdio.h>

int main()
{
    typedef struct Element {
        struct Element *next;
        void *data;
    } Element;
    
    bool createStack (Element **stack) {
        *stack = NULL;
        return true;
    }
    
    return 0;
}

