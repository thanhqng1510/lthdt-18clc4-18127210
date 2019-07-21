#pragma once

#include <iostream>

#include "GateInterface.hpp"

class BussinessGate : public GateInterface {
private:
    int m_price, m_stock;

public:
    BussinessGate();
    BussinessGate(int price, int stock);

public:
    void Input() override;
    void Output() const override;
    bool Allow(PersonInterface* const person) const override;
};