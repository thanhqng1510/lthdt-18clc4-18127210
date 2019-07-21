#pragma once

#include "PersonInterface.hpp"

class GateInterface {
public:
    virtual void Input() = 0;
    virtual void Output() const = 0;
    virtual bool Allow(PersonInterface* const person) const = 0;
};