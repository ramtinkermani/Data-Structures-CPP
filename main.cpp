#include <iostream>
#include <stdlib.h>
#include "linkedList.h"

using namespace std;

int main()
{
    Node* myList = NULL;
    cout << "List Len: " << listLen(myList) << endl;
    addToListEnd(&myList, 11);
    cout << "List Len: " << listLen(myList) << endl;
    addToListEnd(&myList, 12);
    addToListEnd(&myList, 13);
    addToListEnd(&myList, 14);
    addToListEnd(&myList, 17);
    addToList(&myList, 10);
    cout << "List Len: " << listLen(myList) << endl;
    printList(myList);
    cout << "Printing list from tail to head! Reverse" << endl;
    printListRev(myList);


    return 0;
}
