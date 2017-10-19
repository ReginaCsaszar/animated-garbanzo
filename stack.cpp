//
// Created by jeannie on 2017.10.17..
//

#include "stack.h"
#include "StackExceptions.hpp"

Stack::Stack(unsigned size) : size(size), freeSpaces(size),
                              stack(new int[size]), nextItem(stack) {}

const unsigned int Stack::getSize() const { return size; }

void Stack::push(int item) {
    if (freeSpaces == 0) throw StackOverflowException();
    *nextItem++ = item;
    freeSpaces--;
}

int Stack::pop() {
    if (isEmpty()) throw StackUnderflowException();
    freeSpaces++;
    return *--nextItem;
}

int Stack::peek() const {
    if (isEmpty()) throw StackEmptyException();
    return *(nextItem-1);
}

const unsigned int Stack::getFreeSpaces() const { return freeSpaces; }

bool Stack::isEmpty() const {
    return size == freeSpaces;
}
