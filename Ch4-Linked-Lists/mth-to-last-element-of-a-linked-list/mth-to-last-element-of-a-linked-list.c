/*
 * PROBLEM
 * Given a singly linked list, devise a tim- and space-efficient algorithm to find the mth-to-last element of the list. 
 * Implement your algorithm, taking care to handle relevant error conditions. Define th to last such that when m=0 the 
 * last element of the list is returned.
 */
 
#include <stdio.h>
#include <stdlib.h>

typedef struct Element {
    struct Element *next;
    void *data;
} Element;

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
