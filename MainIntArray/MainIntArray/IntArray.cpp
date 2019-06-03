#include "IntArray.hpp"

int& IntArray::operator [] (const unsigned int& index) {
    if (index >= m_cap)
        throw "Out of boundary exception\n";
    return m_arr[index];
}

int IntArray::operator [] (const unsigned int& index) const {
    if (index >= m_cap)
        throw "Out of boundary exception\n";
    return m_arr[index];
}

IntArray& IntArray::operator = (const IntArray& other) {
    delete [] m_arr;
    m_cap = other.m_cap;
    m_len = other.m_len;
    m_arr = new int [other.m_cap];
    for (int i = 0; i < other.m_len; ++i)
        m_arr[i] = other[i];
    return *this;
}

std::istream& operator >> (std::istream& stream, IntArray& a) {
    std::cout << "Enter " << a.m_cap << " elements: ";
    for (int i = 0; i < a.m_cap; ++i)
        stream >> a[i];
    a.m_len = a.m_cap;
    return stream;
}

std::ostream& operator << (std::ostream& stream, const IntArray& a) {
    for (int i = 0; i < a.m_len; ++i)
        stream << a[i] << " ";
    return stream;
}

IntArray::IntArray(): m_cap(0), m_len(0), m_arr(nullptr) {}

IntArray::IntArray(const unsigned int& cap): m_cap(cap), m_len(0), m_arr(new int [cap]) {}

IntArray::IntArray(const int* const a, const unsigned int& len): m_cap(len), m_len(len), m_arr(new int [len]) {
    for (int i = 0; i < len; ++i)
        m_arr[i] = a[i];
}

IntArray::IntArray(const IntArray& other): m_cap(other.m_cap), m_len(other.m_len), m_arr(new int [other.m_cap]) {
    for (int i = 0; i < other.m_len; ++i)
        m_arr[i] = other[i];
}

IntArray::~IntArray() {
    delete [] m_arr;
    m_cap = m_len = 0;
}

IntArray::operator int () const {
    if (m_len == 0)
        return 0;
    
    int sum = 0;
    for (int i = 0; i < m_len; ++i)
        sum += m_arr[i];
        
    return sum / m_len;
}
