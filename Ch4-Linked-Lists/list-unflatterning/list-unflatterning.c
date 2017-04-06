/*
 * PROBLEM
 * Unflatten the list created by the previous problem and restore the data 
 * structure o its original condition.
 */

#include <stdio.h>

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    struct Node *child;
    int value;
} Node;

void exploreAndSeparate(Node *childListStart){
    Node *curNode=childListStart;
    while (curNode){
        if(curNode->child){
            curNode->child->prev->next = NULL;
            curNode->child->prev=NULL;
            exploreAndSeparate(curNode->child);
        }
        curNode = curNode->next;
    }
}

void unflattenList(Node *start, Node **tail) {
    Node *curNode;
    exploreAndSeparate(start);
    for (curNode=start;curNode->next;curNode = curNode->next){
        
    }
    *tail = curNode;
}

void main(){
}
