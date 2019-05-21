#ifndef rect_hpp
#define rect_hpp

#include "point.hpp"

class rectangle {
    point _topLeft, _bottomRight;
    
public:
    rectangle();
    rectangle(const point&, const point&);
    ~rectangle();
    point GetTopLeft() const;
    point GetBottomRight() const;
    rectangle& SetTopLeft(const point&);
    rectangle& SetBottomRight(const point&);
};

#endif /* rect_hpp */
