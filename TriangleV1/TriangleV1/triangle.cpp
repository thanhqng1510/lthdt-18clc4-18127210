#include "triangle.hpp"

triangle::triangle() : _a(point()), _b(point()), _c(point()) {}

triangle::triangle(const point& a, const point& b, const point& c) : _a(a), _b(b), _c(c) {}

triangle::~triangle() {}

point triangle::GetA() {
    return _a;
}

point triangle::GetB() {
    return _b;
}

point triangle::GetC() {
    return _c;
}

triangle& triangle::SetA(const point& a) {
    _a = a;
    return *this;
}

triangle& triangle::SetB(const point& b) {
    _b = b;
    return *this;
}

triangle& triangle::SetC(const point& c) {
    _c = c;
    return *this;
}
