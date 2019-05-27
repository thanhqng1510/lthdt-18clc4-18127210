#include "Rectangle.hpp"

Rectangle::Rectangle(): m_top_left(new Point(1.f, 1.f)), m_bottom_right(new Point(10.f, 10.f)) {}

Rectangle::Rectangle(Point* p1, Point* p2): m_top_left(new Point()), m_bottom_right(new Point()) {
    *m_top_left = *p1;
    *m_bottom_right = *p2;
}

Rectangle::Rectangle(const Point& p1, const Point& p2): m_top_left(new Point()), m_bottom_right(new Point()) {
    *m_top_left = p1;
    *m_bottom_right = p2;
}

Rectangle::Rectangle(const Rectangle& other): m_top_left(new Point()), m_bottom_right(new Point()) {
    *m_top_left = *(other.m_top_left);
    *m_bottom_right = *(other.m_bottom_right);
}

Rectangle::~Rectangle() {
    delete m_top_left;
    delete m_bottom_right;
}

Point Rectangle::GetTopLeft() const {
    return *m_top_left;
}

Point Rectangle::GetBottomRight() const {
    return *m_bottom_right;
}

Rectangle& Rectangle::SetTopLeft(const Point& other) {
    *m_top_left = other;
    return *this;
}

Rectangle& Rectangle::SetBottomRight(const Point& other) {
    *m_bottom_right = other;
    return *this;
}

float Rectangle::Perimeter() const {
    float width = abs(m_top_left->X() - m_bottom_right->X()), height = abs(m_top_left->Y() - m_bottom_right->Y());
    return 2 * (width + height);
}

float Rectangle::Area() const {
    float width = abs(m_top_left->X() - m_bottom_right->X()), height = abs(m_top_left->Y() - m_bottom_right->Y());
    return width * height;
}
