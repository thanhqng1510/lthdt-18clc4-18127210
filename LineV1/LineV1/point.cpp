#include "point.hpp"

point::point() {
    _x = 0;
    _y = 0;
}

point::point(float x, float y) {
    _x = x;
    _y = y;
}

point::~point() {}

float point::X() {
    return _x;
}

float point::Y() {
    return _y;
}

void point::SetX(float x) {
    _x = x;
}

void point::SetY(float y) {
    _y = y;
}
