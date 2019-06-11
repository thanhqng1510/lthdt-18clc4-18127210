#ifndef Point_hpp
#define Point_hpp

#include <string>
#include <sstream>
#include <cmath>
#include <regex>
#include "Tokenizer.hpp"

class Point {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<Point> s_Parse(const std::string& string);
    static std::unique_ptr<Point> s_TryParse(const std::string& string);
    
private:
    float m_x, m_y;
    
public:
    Point();
    Point(const float& x, const float& y);
    Point(const Point& other);
    ~Point();
    
public:
    Point& GetX(const float& x);
    Point& GetY(const float& y);
    
public:
    float CalcDistanceTo(const Point& other) const;
    std::string ToString() const;
};

#endif /* Point_hpp */
