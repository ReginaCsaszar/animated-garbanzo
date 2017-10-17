#include <iostream>
#include "stack.h"

int main() {
    Stack mine = Stack(10);
    mine.push(7);
    mine.push(23);
    std::cout << "peek: " << mine.peek()
              << " size : " << mine.getSize()
              << " free spaces : " << mine.freeSpaces()
              << std::endl;


    int value = mine.pop();
    std::cout << "pop: " << value
              << " peek: " << mine.peek()
              << " size : " << mine.getSize()
              << " free spaces : " << mine.freeSpaces()
              << std::endl;
    mine.pop();
    try { mine.pop(); } catch (e) {}
    mine.peek();
    return 0;
}