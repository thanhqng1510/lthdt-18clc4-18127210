#pragma once

#include <string>

class CItem {
protected:
    friend class CFolder;

    std::string m_name;
    unsigned int m_size;
    bool m_read_only, m_hidden;

public:
    CItem(const std::string& name);

public:
    virtual void Print(bool print_hidden) const;
    virtual void SetHidden(bool option, bool apply_all);
    virtual CItem* FindByName(const std::string& name);
};