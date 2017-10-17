//
// Created by jeannie on 2017.10.17..
//

#ifndef STACKDOJO_STACKEXCEPTIONS_HPP
#define STACKDOJO_STACKEXCEPTIONS_HPP
#include <exception>

class StackOverflowException : public std::exception {

public:
    virtual const char* what() const noexcept { return "Stack is full!"; }
};

class StackUnderflowException : public std::exception {

public:
    virtual const char* what() const noexcept { return "Stack is empty!"; }
};

class StackEmptyException : public std::exception {

public:
    virtual const char* what() const noexcept { return "Stack is empty!"; }
};


#endif //STACKDOJO_STACKEXCEPTIONS_HPP