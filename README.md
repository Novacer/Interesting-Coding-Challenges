# Interesting-Coding-Challenges
Just me messing around with interesting programming/contest problems that I find now and then. Just For Fun


## Queue Using Two Stacks
Classic interview question that asks you to create a Queue class with two member functions enqueue() and dequeue() using two Stacks.
Queues follow the FIFO principle (First In First Out). On the other hand, Stacks have member functions push() and pop() and follow the LIFO principle (Last In First Out). The correct implementation is to enqueue() the objects into a Stack, but before you dequeue() the Stack you push all of the objects into a second Stack. This reverses the order of the Stack so when you pop() the top element from the Stack, it is the one that has been in the Stack the longest.
