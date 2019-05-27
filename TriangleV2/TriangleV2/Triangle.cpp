#include "Triangle.hpp"

Triangle::Triangle(): m_a(new Point(1.f, 1.f)), m_b(new Point(1.f, 2.f)), m_c(new Point(4.f, 2.f)) {}

Triangle::Triangle(const Point* const a, const Point* const b, const Point* const c): m_a(new Point()), m_b(new Point()), m_c(new Point()) {
    *m_a = *a;
    *m_b = *b;
    *m_c = *c;
}

Triangle::Triangle(const Point& a, const Point& b, const Point& c): m_a(new Point()), m_b(new Point()), m_c(new Point()) {
    *m_a = a;
    *m_b = b;
    *m_c = c;
}

Triangle::Triangle(const Triangle& other): m_a(new Point()), m_b(new Point()), m_c(new Point()) {
    *m_a = *(other.m_a);
    *m_b = *(other.m_b);
    *m_c = *(other.m_c);
}

Triangle::~Triangle() {
    delete m_a;
    delete m_b;
    delete m_c;
}

Point Triangle::GetA() const {
    return *m_a;
}

Point Triangle::GetB() const {
    return *m_b;
}

Point Triangle::GetC() const {
    return *m_c;
}

Triangle& Triangle::SetA(const Point& other) {
    *m_a = other;
    return *this;
}

Triangle& Triangle::SetB(const Point& other) {
    *m_b = other;
    return *this;
}

Triangle& Triangle::SetC(const Point& other) {
    *m_c = other;
    return *this;
}

float Triangle::Perimeter() const {
    float len1 = m_a->CalcDistanceTo(*m_b), len2 = m_b->CalcDistanceTo(*m_c), len3 = m_c->CalcDistanceTo(*m_a);
    return len1 + len2 + len3;
}

float Triangle::Area() const {
    float len1 = m_a->CalcDistanceTo(*m_b), len2 = m_b->CalcDistanceTo(*m_c), len3 = m_c->CalcDistanceTo(*m_a);
    float s = (len1 + len2 + len3) / 2;
    return sqrt(s * (s - len1) * (s - len2) * (s - len3));
}
