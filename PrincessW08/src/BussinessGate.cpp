#include "BussinessGate.hpp"

BussinessGate::BussinessGate() 
: m_price(0), m_stock(0) {}

BussinessGate::BussinessGate(int price, int stock) 
: m_price(price), m_stock(stock) {}

void BussinessGate::Input() {
    std::cout << "Input price: ";
    std::cin >> m_price;
    std::cout << "Input stock: ";
    std::cin >> m_stock;
}

void BussinessGate::Output() const {
    std::cout << "Bussiness gate\n";
    std::cout << "Price: " << m_price << "\n";
    std::cout << "Stock: " << m_stock << "\n";
}

bool BussinessGate::Allow(PersonInterface* const person) const {
    if (m_price * m_stock > person->m_money)
        return false;
            
    person->m_money -= m_price * m_stock;
    return true;
}