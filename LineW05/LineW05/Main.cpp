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
    std::unique_ptr<Point> point_parse;
    try {
        point_parse = Point::s_TryParse(point_string);
    }
    catch (const char* message) {
        std::cout << message << std::endl;
        point_parse = nullptr;
    }
    if (point_parse)
        std::cout << point_parse->ToString() << std::endl;
    
    std::string line_string = "(1.1,2.5);(3.5,4.8)";
    std::unique_ptr<Line> line_parse;
    try {
        line_parse = Line::s_TryParse(line_string);
    }
    catch (const char* message) {
        std::cout << message << std::endl;
        line_parse = nullptr;
    }
    if (line_parse)
        std::cout << line_parse->ToString() << std::endl;
}
