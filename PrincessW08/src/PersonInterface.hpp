#pragma once

#include <iostream>

class PersonInterface {
protected:
    friend class BussinessGate;
    friend class AcademicGate;
    friend class PowerGate;

    int m_money, m_intel, m_power;

public:
    PersonInterface();
    PersonInterface(int money, int intel, int strength);

public:
    void Input();
    virtual void Output() const;
};