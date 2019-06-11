#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"

int Point::s_instance_count = 0;
int Circle::s_instance_count = 0;

int main() {
    std::string circle_str = "(10.5,8);5.2";
    try {
        std::unique_ptr<Circle> c = Circle::s_TryParse(circle_str);
        std::cout << c->ToString() << std::endl;
    }
    catch (const char* message) {
        std::cout << message << std::endl;
    }
}
