#include "Prince.hpp"

Prince::Prince()
: PersonInterface() {}

Prince::Prince(int money, int intel, int strength)
: PersonInterface(money, intel, strength) {}

void Prince::Input() {
    std::cout << "Prince\n";
    PersonInterface::Input();
}

void Prince::Output() const {
    std::cout << "Prince\n";
    PersonInterface::Output();
}