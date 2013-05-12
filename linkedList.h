/*
TODO LIST:
- Make sure you free dynamically allocated memories in all functions and the main
*/

#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node Node;
struct node{
    int value;
    Node* next;
};

void addToList(Node** head, int item){              // Add an item to the head of the list
    Node* tempNode = (Node*) malloc(sizeof(Node));
    tempNode->value = item;
    tempNode->next = *head;
    *head = tempNode;
}

void addToListEnd(Node** head, int item){           // Add an item to the tail of the list
    Node* itr = *head;
    Node* tempNode = (Node*) malloc(sizeof(Node));
    tempNode->value = item;
    tempNode->next = NULL;
    if(itr == NULL)
        *head = tempNode;
    else{
        while(itr->next != NULL)
            itr = itr->next;
        itr->next = tempNode;
    }
}

void printList(Node* head){                         // Prints list from head to tail
    Node* itr = head;
    while(itr->next != NULL){
        cout << itr->value << endl;
        itr = itr->next;
    }
    cout << itr->value << endl;
}

int listLen(Node* head){                            // Length of the list
    Node* itr = head;
    int len = 1;    // starting from 1 and not zero because of the while condition for a one-element-list
    if(itr == NULL) // if list is empty
        return 0;
    while(itr->next != NULL){
        itr = itr->next;
        len++;
    }
    return len;
}

void printListRev(Node* head){                      // Prints list from tail to head (Revers)
    int listLength = listLen(head);
    Node* itr = head;   // List iterator
    int* tempArray = (int*)malloc(sizeof(int)*listLength);
    int i = 0;          // Array iterator
    //for(i=0; i<listLength; i++){  // "For loop" works as well!
    while(itr != NULL){
        tempArray[i] = itr->value;
        itr = itr->next;
        i++;             // remove this if using FOR LOOP
    }
    for(i=listLength-1; i>=0; i--)
        cout << tempArray[i] << endl;
}

void removeNthItem(Node** head, int n){             // Remove the Nth element from the list, 0-indexed
    Node* itr = *head;
    if(itr == NULL)
        return;
    if(n > listLen(*head)-1){
        cout << "Error: Item out of range; Abort Deletion!" <<endl;
        return;
    }
    if(n == 0){
        Node* temp = itr->next;
        free(itr);
        *head = temp;
        return;
    }
    else{
        for(int i=0; i<n-1; i++)
            itr = itr->next;
        Node* temp = itr->next;
        itr->next = (itr->next)->next;
        free(temp);
    }
}


#endif // LINKEDLIST_H_INCLUDED






