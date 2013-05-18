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

void printListRev(Node* head);                      // Prints list from tail to head (Reverse)

int listLen(Node* head);                            // Length of the list

void removeNthItem(Node** head, int n);             // Remove the Nth element from the list, 0-indexed from the head

void removeValueFirst(Node** head, int i);          // Removes the first occurrence of value i in the list

void removeValueAll(Node** head, int i);            // Removes all the occurrences of value i in the list

void reverseList(Node** head);                      // Reverses the list from head to tail and vice versa

int returnItem(Node* head, int n);                  // Returns the Nth item of the list, starting from head=0

#endif // LINKEDLIST_H_INCLUDED


/*
    // *********************************** Test cases for testing the Linked List data structure and functions

    Node* myList = NULL;
    //cout << "List Len: " << listLen(myList) << endl;
    addToListEnd(&myList, 11);
    //cout << "List Len: " << listLen(myList) << endl;
    addToListEnd(&myList, 12);
    addToListEnd(&myList, 13);
    addToListEnd(&myList, 11);
    addToListEnd(&myList, 14);
    addToListEnd(&myList, 11);
    addToListEnd(&myList, 15);
    cout << "List Len: " << listLen(myList) << endl;
    printList(myList);
    //cout << "Removing first item!" << endl;
    //printListRev(myList);
    //removeNthItem(&myList, 0);
    //removeNthItem(&myList, 3);
    //printList(myList);

    //cout << "Removing Value 11" << endl;
    //removeValueFirst(&myList, 11);
    //printList(myList);

    //cout << "Removing Value 17" << endl;
    //removeValueFirst(&myList, 17);
    //printList(myList);

    //cout << "reversing the list ...: " << endl;
    //reverseList(&myList);
    cout << "removing all occurrences of value i from the list ..." << endl;
    removeValueAll(&myList, 11);
    printList(myList);

*/
