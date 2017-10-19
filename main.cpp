#include <iostream>
#include "stack.h"

int main() {
    Stack mine = Stack(10);
    mine.push(7);
    mine.push(23);
    std::cout << "stack: [7] [23] "
              << std::endl;
    std::cout << "peek: " << mine.peek()
              << " size : " << mine.getSize()
              << " free spaces : " << mine.getFreeSpaces()
              << std::endl;


    int value = mine.pop();
    std::cout << "pop: " << value
              << " peek: " << mine.peek()
              << " size : " << mine.getSize()
              << " free spaces : " << mine.getFreeSpaces()
              << std::endl;

    return 0;
}