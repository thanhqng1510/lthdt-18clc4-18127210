#include "Point.hpp"

Point::Point(): m_x(0.f), m_y(0.f) {}

Point::Point(float x, float y): m_x(x), m_y(y) {}

Point::~Point() {}

float Point::CalcDistanceTo(const Point& other) {
    float dx = m_x - other.m_x, dy = m_y - other.m_y;
    return sqrt(dx * dx + dy * dy);
}
