#include "PersonInterface.hpp"

PersonInterface::PersonInterface()
: m_money(0), m_intel(0), m_power(0) {}

PersonInterface::PersonInterface(int money, int intel, int power) 
: m_money(money), m_intel(intel), m_power(power) {}

void PersonInterface::Input() {
    std::cout << "Input money: ";
    std::cin >> m_money;
    std::cout << "Input intel: ";
    std::cin >> m_intel;
    std::cout << "Input power: ";
    std::cin >> m_power;
}

void PersonInterface::Output() const {
    std::cout << "Money: " << m_money << "\n"; 
    std::cout << "Intel: " << m_intel << "\n"; 
    std::cout << "Power: " << m_power << "\n"; 
}