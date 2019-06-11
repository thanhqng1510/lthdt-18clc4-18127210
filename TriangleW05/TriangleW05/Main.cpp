#include <iostream>
#include "Point.hpp"
#include "Triangle.hpp"

int Point::s_instance_count = 0;
int Triangle::s_instance_count = 0;

int main() {
    std::string triangle_str = "(5.7,5.1);(6,6);(5,1.9)";
    std::unique_ptr<Triangle> t;
    
    try {
        t = Triangle::s_TryParse(triangle_str);
    }
    catch (const char* message) {
        std::cout << message << std::endl;
        t = nullptr;
    }
    
    if (t)
        std::cout << t->ToString() << std::endl;
}
