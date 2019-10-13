#include <iostream>
#include "CircleQueue.cpp"
#include "CircleQueue.h"
using namespace std ;


int main() {
    std::cout << "Hello, World!" << std::endl;
    CircleQueue<int> c(5);
    cout << c.is_empty() ;
    c.enQueue(5);
    c.enQueue(4);
    c.enQueue(3);
    c.enQueue(2);
    c.enQueue(1);
    cout << c.is_full() ;

    return 0;
}