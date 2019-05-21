#ifndef circle_hpp
#define circle_hpp

#include "point.hpp"

class circle {
    point _center;
    double _radius;
    
public:
    circle();
    circle(const point&, const double&);
    ~circle();
    point GetCenter() const;
    double GetRadius() const;
    circle& SetCenter(const point&);
    circle& SetRadius(const double&);
};

#endif /* circle_hpp */
