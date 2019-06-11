#include <iostream>
#include "Point.hpp"
#include "Rectangle.hpp"

int Point::s_instance_count = 0;
int Rectangle::s_instance_count = 0;

int main() {
    std::string rect_string = "(5.7,5.1);(6,6)";
    std::unique_ptr<Rectangle> r;
    
    try {
        r = Rectangle::s_TryParse(rect_string);
    }
    catch (const char* message) {
        std::cout << message << std::endl;
        r = nullptr;
    }
    
    if (r)
        std::cout << r->ToString() << std::endl;
}
