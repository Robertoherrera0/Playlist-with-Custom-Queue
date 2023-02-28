# Instructions  
 
This purpose of this exercise is to give you the opportunity to implement your own Queue class.

The input, output, and tests are identical to the previous Music Queue assignment.

Write your own Queue class and use it to solve the Music Queue assignment. You must not include other data structures from the standard library (except `std::vector` although that should not be necessary). You must implement the Queue with an underlying circular buffer. If you use a LinkedList, I will give you partial credit.

Your Queue should have `void push(T item)`, `void pop()` and `T front()` methods at a minimum. I would also recommend a `bool empty()` method.

For this assignment, assume that the circular buffer will never exceed 10 items. You may hardcode the size.