#ifndef Point_hpp
#define Point_hpp

#include <cmath>

class Point {
    float m_x, m_y;
    
public:
    float X() { return m_x; };
    float Y() { return m_y; };
    void SetX(float x) { m_x = x; };
    void SetY(float y) { m_x = y; };
public:
    Point();
    Point(float x, float y);
    ~Point();
public:
    float CalcDistanceTo(const Point& other);
};

#endif /* Point_hpp */
