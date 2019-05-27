#include "DynamicArray.hpp"
#include <iostream>

int main() {
    DynamicArray a;
    a.Push(10);
    a.Push(20);
    a.Push(30);
    std::cout << a.GetAt(0) << " " << a.GetAt(2) << std::endl;
    std::cout << a[0] << " " << a[2] << std::endl;
    
    DynamicArray b = a;
    b[0] = 100;
    std::cout << a.GetAt(0) << " " << a.GetAt(2) << std::endl;
    std::cout << a[0] << " " << a[2] << std::endl;
    std::cout << b.GetAt(0) << " " << b.GetAt(2) << std::endl;
    std::cout << b[0] << " " << b[2] << std::endl;
}
