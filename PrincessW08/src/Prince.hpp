#pragma once

#include "PersonInterface.hpp"

class Prince : public PersonInterface {
public:
    Prince();
    Prince(int money, int intel, int strength);

public:
    void Output() const override;
};