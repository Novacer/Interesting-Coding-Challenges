/* 
 *  Task: Implement a Queue using two Stacks
 */

#include <cstdlib>
#include <iostream>
#include <assert.h>
#include "LinkedNode.h"
#include "Stack.h"
#include "Queue.h"

using namespace std;

/*
 *  For testing and demonstration purposes
 */
int main(int argc, char** argv) {
    Queue queue;
    LinkedNode node1(1);
    LinkedNode node2(2);
    LinkedNode node3(3);
    
    queue.enqueue(&node1);
    queue.enqueue(&node2);
    
    LinkedNode* number_1 = queue.dequeue();
    LinkedNode* number_2 = queue.dequeue();
    
    queue.enqueue(&node3);
    LinkedNode* number_3 = queue.dequeue();
    
    assert(number_1->val == 1);
    assert(number_2->val == 2);
    assert(number_3->val == 3);
    
    delete number_1;
    delete number_2;
    delete number_3;
    
    number_1 = 0;
    number_2 = 0;
    number_3 = 0;
    
    return 0;
}

