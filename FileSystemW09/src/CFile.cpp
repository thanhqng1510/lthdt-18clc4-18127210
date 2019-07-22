#include <iostream>

#include "CFile.hpp"

CFile::CFile(const std::string& name)
: CItem(name) {}

CFile::CFile(const std::string& name, unsigned int size)
: CItem(name) {
    CItem::m_size = size;
}

void CFile::Print(bool print_hidden) const {
    if (CItem::m_hidden && print_hidden)  {
        std::cout << "[File] ";
        CItem::Print(print_hidden);
    }
}