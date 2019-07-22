#include <iostream>

#include "CFolder.hpp"

CFolder::CFolder(const std::string& name)
: CItem(name) {}

void CFolder::Add(CItem* item) {
    m_items.emplace_back(item);
}

void CFolder::Print(bool print_hidden) const {
    if (CItem::m_hidden && print_hidden)  {
        std::cout << "[Folder] ";
        CItem::Print(print_hidden);
    }
}

CItem* CFolder::FindByName(const std::string& name) {
    for (CItem* i : m_items)
        if (i->m_name == name)
            return i;
    
    std::cout << "Can not find " << name << ", returning nullptr\n";
    return nullptr;
}

CItem* CFolder::RemoveByName(const std::string& name) {
    for (int i = 0; i < m_items.size(); ++i)
        if (m_items[i]->m_name == name) {
            CItem* temp = m_items[i];
            m_items.erase(m_items.begin() + i);
            return temp;
        }
    
    std::cout << "Can not find " << name << ", returning nullptr\n";
    return nullptr;
}