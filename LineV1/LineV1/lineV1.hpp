#ifndef lineV1_hpp
#define lineV1_hpp

#include "point.hpp"

class line {
    point _start, _end;
    
public:
    line();
    line(const point& start, const point& end);
    ~line();
    point GetStart() const;
    point GetEnd() const;
    line& SetStart(const point& start);
    line& SetEnd(const point& end);
};

#endif /* lineV1_hpp */
