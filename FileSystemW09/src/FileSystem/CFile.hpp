#pragma once

#include "CItem.hpp"

class CFile : public CItem {
public:
    CFile(const std::string& name, unsigned int size);

public:
    void Print(bool print_hidden) const override;
};