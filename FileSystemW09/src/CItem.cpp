#include <iostream>

#include "CItem.hpp"

CItem::CItem(const std::string& name)
: m_name(std::move(name)), m_size(0), m_read_only(false), m_hidden(false) {}

void CItem::Print(bool print_hidden) const {
    if (!m_hidden || (m_hidden && print_hidden))
        std::cout << m_name << ": " << m_size << " bytes " << (m_read_only == true ? " (READ_ONLY)" : "") << "\n";
}
