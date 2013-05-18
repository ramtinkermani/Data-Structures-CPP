/*
TODO LIST:
- Make sure you free dynamically allocated memories in all functions and the main
- Use function templates to extend the functions to other type than INT
- Use exception for exception handling. Add boundray checking for the Lists and the Stacl objects
*/

#include <iostream>
#include <stdlib.h>
#include "linkedList.h"
#include "Stack.h"

using namespace std;

int main(int argc, char* argv[])
{

    Stack* S1 = new Stack(5);
    cout << "pushing " << 111 << endl;
    S1->push(111);
    cout << "pushing " << 222 << endl;
    S1->push(222);
    cout << "pushing " << 333 << endl;
    S1->push(333);
    cout << "Pop an item: " << S1->pop() << endl;
    cout << "Pop an item: " << S1->pop() << endl;
    cout << "Pop an item: " << S1->pop() << endl;

    delete S1;
    return 0;
}
