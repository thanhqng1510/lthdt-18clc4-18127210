#ifndef Triangle_hpp
#define Triangle_hpp

#include "Point.hpp"

class Triangle {
    Point* m_a, * m_b, * m_c;
public:
    Triangle();
    Triangle(const Point* const a, const Point* const b, const Point* const c);
    Triangle(const Point& a, const Point& b, const Point& c);
    Triangle(const Triangle& other);
    ~Triangle();
public:
    Point GetA() const;
    Point GetB() const;
    Point GetC() const;
    Triangle& SetA(const Point& other);
    Triangle& SetB(const Point& other);
    Triangle& SetC(const Point& other);
public:
    float Perimeter() const;
    float Area() const;
};

#endif /* Triangle_hpp */
