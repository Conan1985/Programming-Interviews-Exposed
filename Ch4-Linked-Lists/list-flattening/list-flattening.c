/*
 * PROBLEM
 * Start with a standard doubly linked list. Now imagine that in addition to the
 * next and previous pointers, each element has a child pointer, which may or 
 * may not point to a separate doubly linked list. These child lists may have 
 * one or more child of their own, and so on, to produce a multilevel data 
 * structure, as shown in Figure 4-3.
 * Flatten the list so that all the nodes appear in a single-level, doubly 
 * linked list. You are given the head and tail of the first level of the list.
 */

#include <stdio.h>

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    struct Node *child;
    int value;
} Node;

void append(Node *child, Node **tail) {
    Node *curNode;
    (*tail)->next = child;
    child->prev = *tail;
    for (curNode=child; curNode->next; curNode=curNode->next) {
        
    }
    *tail=curNode;
}

void flattenList (Node *head, Node **tail) {
    Node *curNode = head;
    while (curNode) {
        if (curNode->child){
            append(curNode->child, tail);
        }
        curNode = curNode->child;
    }
}

void main(){
}
