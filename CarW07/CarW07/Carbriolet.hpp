#ifndef Carbriolet_hpp
#define Carbriolet_hpp

#include "Car.hpp"

class Carbriolet : public Car {
public:
    inline void StartEngine() override {
        std::cout << "Removing roof...\n";
        Car::StartEngine();
    }
};

#endif /* Carbriolet_hpp */
