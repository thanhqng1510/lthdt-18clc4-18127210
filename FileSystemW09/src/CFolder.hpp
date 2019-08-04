#pragma once

#include <vector>
#include <string>

#include "CItem.hpp"

class CFolder : public CItem {
protected:
    std::vector<CItem*> m_items;

private:
    void PrintHelper(bool print_hidden) const;

public:
    CFolder(const std::string& name);

public:
    void Add(CItem* item);
    void Print(bool print_hidden) const override;
    CItem* FindByName(const std::string& name) override;
    CItem* RemoveByName(const std::string& name);
    void SetHidden(bool option, bool apply_all) override;
};
