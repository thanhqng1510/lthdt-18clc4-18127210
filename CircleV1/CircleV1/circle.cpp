#include "circle.hpp"

circle::circle() : _center(point()), _radius(0.0) {}

circle::circle(const point& center, const double& radius) : _center(center), _radius(radius) {}

circle::~circle() {}

point circle::GetCenter() const {
    return _center;
}

double circle::GetRadius() const {
    return _radius;
}

circle& circle::SetCenter(const point& center) {
    _center = center;
    return *this;
}

circle& circle::SetRadius(const double& radius) {
    _radius = radius;
    return *this;
}
