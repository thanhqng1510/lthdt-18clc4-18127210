#ifndef Triangle_hpp
#define Triangle_hpp

#include <string>
#include <sstream>
#include <regex>
#include <vector>
#include "Point.hpp"

class Triangle {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<Triangle> s_Parse(const std::string& string);
    static std::unique_ptr<Triangle> s_TryParse(const std::string& string);
    
private:
    Point m_a, m_b, m_c;
    
public:
    Triangle();
    Triangle(const Point& a, const Point& b, const Point& c);
    Triangle(const Triangle& other);
    ~Triangle();
    
public:
    inline Point& GetA() { return m_a; }
    inline Point& GetB() { return m_b; }
    inline Point& GetC() { return m_c; }
    
public:
    std::string ToString() const;
};

#endif /* Triangle_hpp */
