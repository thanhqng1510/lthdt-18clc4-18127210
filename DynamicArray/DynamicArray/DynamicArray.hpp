#ifndef DynamicArray_hpp
#define DynamicArray_hpp

class DynamicArray {
    int* m_a, m_len, m_max;
    static const int INITIAL_SIZE;
public:
    DynamicArray();
    DynamicArray(int max);
    DynamicArray(const DynamicArray& other);
    ~DynamicArray();
public:
    DynamicArray& Push(int value);
    int& GetAt(int i);
public:
    int& operator [] (int i);
};

#endif /* DynamicArray_hpp */
