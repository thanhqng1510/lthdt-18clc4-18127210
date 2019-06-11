#ifndef Circle_hpp
#define Circle_hpp

#include <string>
#include <sstream>
#include <regex>
#include <vector>
#include "Point.hpp"

class Circle {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<Circle> s_Parse(const std::string& string);
    static std::unique_ptr<Circle> s_TryParse(const std::string& string);
    
private:
    Point m_center;
    float m_rad;
    
public:
    Circle();
    Circle(const Point& a, const float& m_rad);
    Circle(const Circle& other);
    ~Circle();
    
public:
    inline Point& GetCenter() { return m_center; }
    inline float& GetRadius() { return m_rad; }
    
public:
    std::string ToString() const;
};

#endif /* Circle_hpp */
