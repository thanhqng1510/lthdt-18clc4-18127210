#ifndef fraction_hpp
#define fraction_hpp

#include <iostream>

class fraction {
    int _nu, _de;
    
public:
    fraction();
    fraction(const int&, const int&);
    ~fraction();
    int GetNum();
    int GetDenom();
    fraction& SetNum(const int&);
    fraction& SetDenom(const int&);
};

#endif /* fraction_hpp */
