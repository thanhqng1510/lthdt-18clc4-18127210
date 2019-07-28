#include <iostream>

#include "CFolder.hpp"

void CFolder::PrintHelper(bool print_hidden) const {
    if (!m_hidden || (m_hidden && print_hidden)) {
        std::cout << "[Folder] ";
        CItem::Print(print_hidden);
    }
}

CFolder::CFolder(const std::string& name)
: CItem(name) {}

void CFolder::Add(CItem* item) {
    for (CItem* i : m_items)
        if (i->m_name == item->m_name) {
            std::cout << "Item " << item->m_name << " has already exist\n";
            return;
        }

    m_items.emplace_back(item);
    m_size += item->m_size;
}

void CFolder::Print(bool print_hidden) const {
    if (!m_hidden || (m_hidden && print_hidden))
        for (CItem* i : m_items)
            if (!i->m_hidden || (i->m_hidden && print_hidden)) {
                if (typeid(*i) == typeid(CFolder))
                    reinterpret_cast<CFolder*>(i)->PrintHelper(print_hidden);
                else
                    i->Print(print_hidden);
            }
}

CItem* CFolder::FindByName(const std::string& name) {
    for (CItem* i : m_items) {
        if (i->m_name == name)
            return i;

        if (typeid(*i) == typeid(CFolder)) {
            CItem* res = reinterpret_cast<CFolder*>(i)->FindByName(name);
            if (res)
                return res;
        }
    }
    return nullptr;
}

CItem* CFolder::RemoveByName(const std::string& name) {
    for (int i = 0; i < m_items.size(); ++i) {
        if (m_items[i]->m_name == name) {
            m_size -= m_items[i]->m_size;
            return *m_items.erase(m_items.begin() + i);
        }

        if (typeid(*m_items[i]) == typeid(CFolder)) {
            CItem* res = reinterpret_cast<CFolder*>(m_items[i])->RemoveByName(name);
            if (res)
                return res;
        }
    }

    return nullptr;
}

void CFolder::SetHidden(bool option, bool apply_all) {
    CItem::SetHidden(option, apply_all);

    if (apply_all) {
        for (CItem* i : m_items) {
            if (typeid(*i) == typeid(CFolder))
                reinterpret_cast<CFolder*>(i)->SetHidden(option, apply_all);
            else
                i->SetHidden(option, apply_all);
        }
    }
}