/*
 * PROBLEM
 * You are given a linked list with at least one node that is either 
 * null-terminated (acyclic), as shown in Figure 4-5, or ends in a cycle 
 * (cyclic), as shown in Figure 4-6.
 * Write a function that takes a pointer to the head of a list and determines 
 * whether the list is cyclic or acyclic. Your function should return false if 
 * the list is acyclic and true if it is cyclic. you may not modify the list in 
 * any way.
 */

#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    struct Node *next;
    int value;
} Node;

bool determineTerminated (Node *head) {
    Node *fast, *slow;
    slow = head;
    fast = slow->next;
    while(true){
        if (!fast || ! (fast->next)) return false;
        else if (fast == slow || fast->next == slow) return true;
        else {
            slow = slow->next;
            fast = fast->next->next;
        }
    }
}

void main(){
}
