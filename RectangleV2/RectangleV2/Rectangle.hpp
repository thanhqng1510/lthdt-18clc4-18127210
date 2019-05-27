#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Point.hpp"

class Rectangle {
    Point* m_top_left, * m_bottom_right;
public:
    Rectangle();
    Rectangle(Point* p1, Point* p2);
    Rectangle(const Point& p1, const Point& p2);
    Rectangle(const Rectangle& other);
    ~Rectangle();
public:
    Point GetTopLeft() const;
    Point GetBottomRight() const;
    Rectangle& SetTopLeft(const Point& other);
    Rectangle& SetBottomRight(const Point& other);
public:
    float Perimeter() const;
    float Area() const;
};

#endif /* Rectangle_hpp */
