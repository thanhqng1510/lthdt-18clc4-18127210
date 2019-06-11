#include <iostream>
#include <string>
#include "Point.hpp"
#include "Line.hpp"
#include "Tokenizer.hpp"

int Point::s_instance_count = 0;
int Line::s_instance_count = 0;

int main() {
    std::cout << Point::s_instance_count << std::endl;
    std::unique_ptr<Point> s = std::make_unique<Point>(4, 3);
    std::cout << Point::s_instance_count << std::endl;
    
    std::cout << Line::s_instance_count << std::endl;
    Line l;
    std::cout << Line::s_instance_count << std::endl;
    std::cout << Point::s_instance_count << std::endl;
    
    std::string point_string = "(3.5,4.9)";
    try {
        std::unique_ptr<Point> point_parse = Point::s_TryParse(point_string);
        std::cout << point_parse->ToString() << std::endl;
    }
    catch (const char* message) {
        std::cout << message << std::endl;
    }
    
    std::string line_string = "(1.1,2.5);(3.5,4.8)";
    try {
        std::unique_ptr<Line> line_parse = Line::s_TryParse(line_string);
        std::cout << line_parse->ToString() << std::endl;
    }
    catch (const char* message) {
        std::cout << message << std::endl;
    }
}
