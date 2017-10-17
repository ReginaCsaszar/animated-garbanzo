//
// Created by jeannie on 2017.10.17..
//

#include "stack.h"
#include "StackExceptions.hpp"

Stack::Stack(unsigned size) : size(size) {}

const unsigned int Stack::getSize() const { return size; }

void Stack::push(int item) {
    if (freeSpaces() == 0) throw StackOverflowException();
    stack.push_back(item);
}

int Stack::pop() {
    if (stack.empty()) throw StackUnderflowException();
    int value = stack.back();
    stack.pop_back();
    return value;
}

int Stack::peek() const {
    if (stack.empty()) throw StackEmptyException();
    return stack.back();
}

const unsigned int Stack::freeSpaces() const {
    return size - unsigned (stack.size());
}