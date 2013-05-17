#include <iostream>
#include <stdlib.h>
#include "linkedList.h"
// Added from another folder! :)
using namespace std;

int main()
{
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

    return 0;
}
