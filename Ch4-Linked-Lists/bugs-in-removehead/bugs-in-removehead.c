/* 
 * PROBLEM
 * Find and fix the bugs in the following C function that is supposed to remove the head element from a singly linked list:
 * void removeHead (ListElement *head) {
 *   free(head); // Line 1
 *   head = head->next; // Line 2
 * }
 */
 
#include <stdio.h>
#include <stdlib.h>

typedef struct Element {
    struct Element *next;
    void *data;
} Element;

void removeHead (Element **head) {
    Element *temp;
    if (head && *head) {
        temp = (*head)->next;
        free (*head);
        *head = temp;
    }
}
 
void main() {
}
