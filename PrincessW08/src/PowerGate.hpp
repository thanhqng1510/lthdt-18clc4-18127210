#pragma once

#include <iostream>

#include "GateInterface.hpp"

class PowerGate : public GateInterface {
private:
    int m_power;

public:
    PowerGate();
    PowerGate(int power);

public:
    void Input() override;
    void Output() const override;
    bool Allow(PersonInterface* const person) const override;
};