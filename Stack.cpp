#include "Stack.h"
#include "linkedList.h"
#include <iostream>
using namespace std;

Stack::Stack(int maxSize) : m_maxSize(maxSize)
{
    m_base = NULL;
}

Stack::~Stack(){
    while(m_base != NULL){
        Node* temp = m_base;
        m_base = temp->next;
        free(temp);
    }
}

void Stack::push(int item){
    addToList(&m_base, item);
}

int Stack::pop(){
    int item = returnItem(m_base, 0);
    removeNthItem(&m_base, 0);
    return item;
}
