#include "DynamicArray.hpp"

const int DynamicArray::INITIAL_SIZE = 128;

DynamicArray::DynamicArray(): m_a(new int [INITIAL_SIZE]), m_len(0), m_max(INITIAL_SIZE) {}

DynamicArray::DynamicArray(int max): m_a(new int [max]), m_len(0), m_max(max) {}

DynamicArray::DynamicArray(const DynamicArray& other): m_a(new int [other.m_len]), m_len(other.m_len), m_max(other.m_len) {
    for (int i = 0; i < m_len; ++i)
        m_a[i] = other.m_a[i];
}

DynamicArray::~DynamicArray() {
    delete [] m_a;
    m_len = m_max = 0;
}

DynamicArray& DynamicArray::Push(int value) {
    m_a[m_len++] = value;
    return *this;
}

int& DynamicArray::GetAt(int i) {
    return m_a[i];
}

int& DynamicArray::operator [] (int i) {
    return m_a[i];
}
