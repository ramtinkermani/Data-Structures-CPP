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

void addToList(Node** head, int item){               // Add an item to the head of the list
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

#endif // LINKEDLIST_H_INCLUDED
