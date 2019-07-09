#ifndef Car_hpp
#define Car_hpp

#include <iostream>

class Car {
public:
    virtual inline void StartEngine() {
        std::cout << "Starting engine...\n";
    }
};

#endif /* Car_hpp */
