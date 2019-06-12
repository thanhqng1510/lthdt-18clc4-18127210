#ifndef DynamicArray_hpp
#define DynamicArray_hpp

#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <regex>
#include "Tokenizer.hpp"

class DynamicArray {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<DynamicArray> s_Parse(const std::string& string);
    static std::unique_ptr<DynamicArray> s_TryParse(const std::string& string);
    
private:
    int m_len;
    std::unique_ptr<int[]> m_arr;
    
public:
    DynamicArray();
    DynamicArray(const int& len);
    DynamicArray(const DynamicArray& other);
    ~DynamicArray();
    
public:
    DynamicArray& operator = (const DynamicArray& other);
    friend std::istream& operator >> (std::istream& stream, DynamicArray& d);
    
public:
    std::string ToString() const;
};

#endif /* DynamicArray_hpp */
