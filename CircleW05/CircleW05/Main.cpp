#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"

int Point::s_instance_count = 0;
int Circle::s_instance_count = 0;

int main() {
    std::string circle_str = "(10.5,-8);5.2";
    std::unique_ptr<Circle> c;
    
    try {
        c = Circle::s_TryParse(circle_str);
    }
    catch (const char* message) {
        std::cout << message << std::endl;
        c = nullptr;
    }
    
    if (c)
        std::cout << c->ToString() << std::endl;
}
