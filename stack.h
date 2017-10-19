//
// Created by jeannie on 2017.10.17.

/*Your task

the size should be given in the constructor (no default constructor allowed)
push functionality (when I add an item to the stack)
pop functionality (when I remove an item)
peek functionality (I can receive the top item without removing it from the stack, so it's peeking)
get the size of the stack (I mean the maximum capacity)
get the number of free spaces left
throw an exception when (StackOverflow) the stack is full and I want to add one more item
throw an exception when the stack is empty (StackUnderflow) and I want to pop an item
Unit tests!!
*/

#ifndef STACK_STACK_H
#define STACK_STACK_H


#include <vector>

class Stack {

public:

    explicit Stack(unsigned);

    void push(int);
    int pop();
    int peek() const;

    const unsigned int getSize() const;
    const unsigned int getFreeSpaces() const;
    bool isEmpty()const;

private:

    const unsigned size;
    unsigned freeSpaces;
    int *stack;
    int *nextItem;
};


#endif STACK_STACK_H
