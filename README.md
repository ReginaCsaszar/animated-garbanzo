# Stack 
Simple stack implementation practice in c++

Császár Regina @Codecool BP 3 (2017.1) Group C

## Stack

So, what's the stack? The stack is a big pile of data. When a new piece of data arrives it's put to the top of the data what arrived last. The stack is a LIFO data type meaning Last In First Out. You only have access to the piece of data put to the stack last. You can imagine stack as a pit. Throw your stuff in an order and you can only remove it in reverse-order.

## Your task

Implement a nice little stack for me please. :) Here are my requirements:

- the size should be given in the constructor (no default constructor allowed)
- push functionality (when I add an item to the stack)
- pop functionality (when I remove an item)
- peek functionality (I can receive the top item without removing it from the stack, so it's peeking)
- I want to be able to get the size of the stack (I mean the maximum capacity)
- And write me a method which gives back the number of free spaces left
- throw an exception when the stack is full and I want to add one more item
- throw an exception when the stack is empty and I want to pop an item
- Unit tests!!

## Extra

If you have time, make your own exceptions! Name them StackOverflow, StackUnderflow.
