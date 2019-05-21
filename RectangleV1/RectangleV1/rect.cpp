#include "rect.hpp"

rectangle::rectangle() : _topLeft(point()), _bottomRight(point()) {}

rectangle::rectangle(const point& top, const point& bot) : _topLeft(top), _bottomRight(bot) {}

rectangle::~rectangle() {}

point rectangle::GetTopLeft() const {
    return _topLeft;
}

point rectangle::GetBottomRight() const {
    return _bottomRight;
}

rectangle& rectangle::SetTopLeft(const point& top) {
    _topLeft = top;
    return *this;
}

rectangle& rectangle::SetBottomRight(const point& bot) {
    _bottomRight = bot;
    return *this;
}
