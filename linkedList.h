#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <iostream>
#include <stdlib.h>

typedef struct node Node;
struct node{
    int value;
    Node* next;
};

void addToList(Node** head, int item);              // Add an item to the head of the list

void addToListEnd(Node** head, int item);           // Add an item to the tail of the list

void printList(Node* head);                         // Prints list from head to tail

int listLen(Node* head);                            // Length of the list

void printListRev(Node* head);                      // Prints list from tail to head (Revers)

void removeNthItem(Node** head, int n);             // Remove the Nth element from the list, 0-indexed

void removeValueFirst(Node** head, int i);          //Removes the first occurrence of value i in the list

void removeValueAll(Node** head, int i);            // Removes all the occurrences of value i in the list

void reverseList(Node** head);                      // Reverses the list from head to tail and vice versa

#endif // LINKEDLIST_H_INCLUDED






