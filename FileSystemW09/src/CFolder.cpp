#include <iostream>

#include "CFolder.hpp"

CFolder::CFolder(const std::string& name)
: CItem(name) {}

void CFolder::Add(CItem* item) {
    if (m_items.find(item->m_name) != m_items.end())
        std::cout << "Item " << item->m_name << " has already exist\n";
    else {
        m_items.insert({ item->m_name, item });
        m_size += item->m_size;
    }
}

void CFolder::Print(bool print_hidden) const {
    std::cout << "[Folder] ";
    CItem::Print(print_hidden);
    for (const auto& i : m_items)
        if (!i.second->m_hidden || (i.second->m_hidden && print_hidden)) {
            std::cout << "      ";
            i.second->Print(print_hidden);
        }
}

CItem* CFolder::FindByName(const std::string& name) {
    for (const auto& i : m_items) {
        if (i.first == name)
            return i.second;

        if (typeid(*(i.second)) == typeid(CFolder))
            return reinterpret_cast<CFolder*>(i.second)->FindByName(name);
    }

    return nullptr;
}

CItem* CFolder::RemoveByName(const std::string& name) {
    for (auto i = m_items.begin(); i != m_items.end(); ++i) {
        if (i->first == name)
            return m_items.erase(i)->second;

        if (typeid(*(i->second)) == typeid(CFolder))
            return reinterpret_cast<CFolder*>(i->second)->RemoveByName(name);
    }
    
    return nullptr;
}