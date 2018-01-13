
#include "LinkedNode.h"

#ifndef STACK_H
#define STACK_H

class Stack{
private:
    LinkedNode* top;
public:
    Stack();
    LinkedNode* pop();
    void push(LinkedNode* plate);
    bool isEmpty();
};


#endif /* STACK_H */

