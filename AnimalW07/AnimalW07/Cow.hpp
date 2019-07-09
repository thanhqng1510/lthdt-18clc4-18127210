#ifndef Cow_h
#define Cow_h

#include <iostream>

#include "Animal.hpp"

class Cow : public Animal {
public:
    inline Cow() : Animal(ANIMAL_TYPE::COW) {}
    
    ~Cow() override = default;
    
public:
    inline int GiveBirth() const override {
        srand((unsigned int)time(nullptr));
        return rand() % 6;
    }
    
    inline int GetMilk() const override {
        srand((unsigned int)time(nullptr));
        return rand() % 21;
    }
    
    inline void Cry() const override {
        std::cout << "Ummm Booo\n";
    }
};

#endif /* Cow_h */
