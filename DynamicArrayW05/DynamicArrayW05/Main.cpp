#include <iostream>
#include <string>
#include "DynamicArray.hpp"

int DynamicArray::s_instance_count = 0;

int main() {
    std::string arr_str = "5;4;3;2;1";
    std::unique_ptr<DynamicArray> d;
    
    try {
        d = DynamicArray::s_TryParse(arr_str);
    }
    catch (const char* message) {
        std::cout << message << std::endl;
        d = nullptr;
    }
    
    if (d)
        std::cout << d->ToString() << std::endl;
}
