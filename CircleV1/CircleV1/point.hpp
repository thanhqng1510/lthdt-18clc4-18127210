#ifndef point_hpp
#define point_hpp

#include <iostream>

class point {
    float _x, _y;
    
public:
    point();
    point(float, float);
    ~point();
    float X();
    float Y();
    void SetX(float);
    void SetY(float);
};

#endif /* point_hpp */
