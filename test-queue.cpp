#include "priority-queue.h"
#include <vector>
#include <iostream>
#include <list>
int main(int agrc, char* agrv[]){
    priority_queue <int, std::vector> queue; 
    queue.insert(3);
    queue.insert(2);
    queue.insert(5);
    queue.insert(6);
    queue.insert(8);
    queue.print();
    std::cout << "max = "<< queue.getMax() << std::endl; 
    queue.del(); 
    queue.print();
    std::cout << "max = "<< queue.getMax() << std::endl; 
    queue.del(); 
    queue.print();
    std::cout << "max = "<< queue.getMax() << std::endl; 
    queue.del(); 
    queue.print();
    std::cout << "max = "<< queue.getMax() << std::endl; 
    queue.del(); 
    queue.print();
    std::cout << "max = "<< queue.getMax() << std::endl; 
    queue.del(); 
    queue.print();
    return 0; 
}