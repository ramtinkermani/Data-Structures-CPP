#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "linkedList.h"

// This Stack class uses a linked list implementation in the corresponding LinkedList.h code
// It uses the head (or base) of the list as the stack pointer (Adds/removes elements from/to head of the list)

class Stack {
private:
    Node* m_base;
    int m_maxSize;              // Maximum capacity of the Stack.
public:
    Stack(int maxSize);         // Creates the Stack wth maxium capacity of "maxSize". Set to -1 to create a Stack object of infinite size
    ~Stack();
    int pop();
    void push(int item);        // _____ LATER ::returns 1 if successfull, 0 if not successfull (maybe due to a stack full)
    //void printItems();        // Prints Stack items Starting from the base
    //void empty();
    //int size();
    //int count();
};

#endif // STACK_H_INCLUDED
