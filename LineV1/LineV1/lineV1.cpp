#include "lineV1.hpp"

line::line() : _start(point()), _end(point()) {}

line::line(const point& start, const point& end) : _start(start), _end(end) {}

line::~line() {}

point line::GetStart() const {
    return _start;
}

point line::GetEnd() const {
    return _end;
}
line& line::SetStart(const point& start) {
    _start = start;
    return *this;
}

line& line::SetEnd(const point& end) {
    _end = end;
    return *this;
}
