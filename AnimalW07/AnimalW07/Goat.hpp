#ifndef Goat_h
#define Goat_h

#include <iostream>

#include "Animal.hpp"

class Goat : public Animal {
public:
    inline Goat() : Animal(ANIMAL_TYPE::GOAT) {}

    ~Goat() override = default;
    
public:
    inline int GiveBirth() const override {
        srand((unsigned int)time(nullptr));
        return rand() % 6;
    }
    
    inline int GetMilk() const override {
        srand((unsigned int)time(nullptr));
        return rand() % 11;
    }
    
    inline void Cry() const override {
        std::cout << "Be Be Be\n";
    }
};

#endif /* Goat_h */
