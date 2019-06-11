#include <iostream>
#include "Point.hpp"
#include "Rectangle.hpp"

int Point::s_instance_count = 0;
int Rectangle::s_instance_count = 0;

int main() {
    std::string rect_string = "(5.7,5.1);(6,6)";
    try {
        std::unique_ptr<Rectangle> r = Rectangle::s_TryParse(rect_string);
        std::cout << r->ToString() << std::endl;
    }
    catch (const char* message) {
        std::cout << message << std::endl;
    }
}
