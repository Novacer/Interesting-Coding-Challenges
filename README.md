# Interesting-Coding-Challenges
Just me messing around with interesting programming/contest problems that I find now and then. Just For Fun.


## Queue Using Two Stacks
Classic interview question that asks you to create a Queue class with two member functions enqueue() and dequeue() using two Stacks.
Queues follow the FIFO principle (First In First Out). On the other hand, Stacks have member functions push() and pop() and follow the LIFO principle (Last In First Out). 

The correct implementation is to enqueue() the objects into a Stack, but before you dequeue() the Stack you push all of the objects into a second Stack. This reverses the order of the Stack so when you pop() the top element from the Stack, it is the one that has been in the Stack the longest.


## Quicksort Using Lambdas
The task at hand is to implement Quicksort for the std::vector<int> type in C++. My spin on it is to try to implement Quicksort in a similar way that you might do so in functional programming. This method takes advantage of the support available for lambda expressions in C++11 and the vector-erase-remove_if idioms. 
  
The benefit of this method is that it is much more expressive and easier to understand than the more optimized ways to implement Quicksort (like the one given in CtCI). The drawbacks are that this method requires a lot more memory and extra copying so it is not as "quick". Also, it doesn't happen in place. Nevertheless, the "form" of code is conceptually much closer to what Quicksort really does so if I were a tutor teaching Quicksort to my students, this would be the example that I show them.
