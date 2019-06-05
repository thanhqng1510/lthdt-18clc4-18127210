#ifndef IntArray_hpp
#define IntArray_hpp

#include <iostream>

class IntArray {
    unsigned int m_len, m_cap;
    int* m_arr;
public:
    int& operator [] (const unsigned int& index);
    int operator [] (const unsigned int& index) const;
    IntArray& operator = (const IntArray& other);
    friend std::istream& operator >> (std::istream& stream, IntArray& a);
    friend std::ostream& operator << (std::ostream& stream, const IntArray& a);
public:
    IntArray();
    IntArray(const unsigned short& cap);
    IntArray(const int* const a, const unsigned int& len);
    IntArray(const IntArray& other);
    ~IntArray();
public:
    explicit operator int () const;
};

#endif /* IntArray_hpp */
