#pragma once

#include <iostream>

#include "GateInterface.hpp"

class AcademicGate : public GateInterface {
private:
    int m_intel;

public:
    AcademicGate();
    AcademicGate(int intel);

public:
    void Input() override;
    void Output() const override;
    bool Allow(PersonInterface* const person) const override;
};