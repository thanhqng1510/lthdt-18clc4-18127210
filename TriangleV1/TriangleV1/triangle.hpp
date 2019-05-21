#ifndef triangle_hpp
#define triangle_hpp

#include "point.hpp"

class triangle {
    point _a, _b, _c;
    
public:
    triangle();
    triangle(const point&, const point&, const point&);
    ~triangle();
    point GetA();
    point GetB();
    point GetC();
    triangle& SetA(const point&);
    triangle& SetB(const point&);
    triangle& SetC(const point&);
};

#endif /* triangle_hpp */
