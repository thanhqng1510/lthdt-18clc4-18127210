#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <string>
#include <sstream>
#include <regex>
#include <vector>
#include "Point.hpp"

class Rectangle {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<Rectangle> s_Parse(const std::string& string);
    static std::unique_ptr<Rectangle> s_TryParse(const std::string& string);
    
private:
    Point m_top_left, m_bottom_right;
    
public:
    Rectangle();
    Rectangle(const Point& top_left, const Point& bottom_right);
    Rectangle(const Rectangle& other);
    ~Rectangle();
    
public:
    inline Point& GetTopLeft() { return m_top_left; }
    inline Point& GetBottomRight() { return m_bottom_right; }
    
public:
    std::string ToString() const;
};

#endif /* Rectangle_hpp */
