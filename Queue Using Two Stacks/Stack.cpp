

#include "Stack.h"
#include <iostream>

#define NULL 0

using namespace std;


/*
 *  Stack() constructs a new empty Stack
 */
Stack::Stack()
    : top(NULL)
{
    
}


/*
 *  isEmpty() returns true if the Stack is empty, false otherwise
 */
bool Stack::isEmpty(){
    if (top == NULL){
        return true;
    }
    else{
        return false;
    }
}


/*
 *  pop() returns the top LinkedNode from the Stack, removing it from the Stack
 *  EFFECTS: prints an error message if the Stack is empty
 */
LinkedNode* Stack::pop(){
    if (isEmpty()){
        cout << "Pop failed!!! Stack is empty!" << endl;
        return NULL;
    }
    
    LinkedNode* temp = top;
    top = top->next;
    
    return temp;
}


/*
 *  push(LinkedNode* plate) pushes plate on to the top of the Stack
 */
void Stack::push(LinkedNode* plate){
    plate->next = top;
    
    top = plate;
}



