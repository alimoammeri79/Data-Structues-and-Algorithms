# Stack
A list that insertion and deletion takes place just on/from oneside i.e `top` of the stack.

## Stack Methods
+ `push(element)`: Inserting a new element at top of the stack
+ `pop()`: Returning and deleting an element from the top
+ `peek()` or `back()`: Returning the top element.
+ `is_empty()`
+ `is_full()`

## More About Stack
+ Calling pop when stack is empty is called `stack underflow`.
+ Calling push when stack is full is called `stack overflow`.
+ All operation on stack takes `O(1)`.
+ Use cases: Undo mechanism in text editors.
+ Stack can be implemented using arrays or linked lists.
