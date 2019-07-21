#include "PowerGate.hpp"

PowerGate::PowerGate() 
: m_power(0) {}

PowerGate::PowerGate(int power) 
: m_power(power) {}

void PowerGate::Input() {
    std::cout << "Input power: ";
    std::cin >> m_power;
}

void PowerGate::Output() const {
    std::cout << "Power gate\n";
    std::cout << "Power: " << m_power << "\n";
}

bool PowerGate::Allow(PersonInterface* const person) const {
    if (m_power > person->m_power)
        return false;
        
    person->m_power -= m_power;
    return true;
}