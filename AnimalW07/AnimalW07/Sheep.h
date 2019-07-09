#ifndef Sheep_h
#define Sheep_h

#include <iostream>

#include "Animal.hpp"

class Sheep : public Animal {
public:
    inline Sheep() : Animal(ANIMAL_TYPE::SHEEP) {}

    ~Sheep() override = default;
    
public:
    inline int GiveBirth() const override {
        srand((unsigned int)time(nullptr));
        return rand() % 6;
    }
    
    inline int GetMilk() const override {
        srand((unsigned int)time(nullptr));
        return rand() % 6;
    }
    
    inline void Cry() const override {
        std::cout << "Beeeeee\n";
    }
};

#endif /* Sheep_h */
