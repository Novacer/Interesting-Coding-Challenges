
#include "Queue.h"
#include <iostream>

using namespace std;


/*
 *  Queue() constructs a new empty Queue
 */
Queue::Queue(){
    inbox = new Stack();
    outbox = new Stack();
}


/*
 * isEmpty() returns true if the Queue is empty, false otherwise
 */
bool Queue::isEmpty(){
    if (inbox->isEmpty() && outbox->isEmpty()){
        return true;
    }
    else{
        return false;
    }
}


/*
 *  enqueue(LinkedNode* plate) places plate into the back of the Queue
 *  this is done by pushing plate onto the top of the Stack inbox
 */
void Queue::enqueue(LinkedNode* plate){
    inbox->push(plate);
}


/*
 *  dequeue() returns the LinkedNode at the front of the Queue, and removes it from the Queue
 *  this is done by transferring all of the LinkedNodes in inbox to outbox in reverse order, then
 *  popping the top element of outbox
 *  EFFECTS: prints an error message if Queue is empty
 */
LinkedNode* Queue::dequeue(){
    if (isEmpty()){
        cout << "Queue is empty!!! Dequeue failed!" <<endl;
        return 0;
    }
    
    while (!inbox->isEmpty()){
        outbox->push(inbox->pop()); // transfer from inbox to outbox in reverse order
    }
    
    return outbox->pop();
}

