
#include "Stack.h"

#ifndef QUEUE_H
#define QUEUE_H

class Queue{
private:
    Stack* inbox;
    Stack* outbox;
public:
    Queue();
    void enqueue(LinkedNode* plate);
    LinkedNode* dequeue();
    bool isEmpty();
};

#endif /* QUEUE_H */

