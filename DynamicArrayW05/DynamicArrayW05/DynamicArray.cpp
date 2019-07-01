#include "DynamicArray.hpp"

std::unique_ptr<DynamicArray> DynamicArray::s_Parse(const std::string& string) {
    std::vector<std::string> str_vec = Tokenizer::s_Parse(string, ";");
    std::unique_ptr<DynamicArray> p = std::make_unique<DynamicArray>(str_vec.size());
    for (int i = 0; i < p->m_len; ++i)
        p->m_arr[i] = stoi(str_vec[i]);
    return p;
}

std::unique_ptr<DynamicArray> DynamicArray::s_TryParse(const std::string& string) {
    if (!std::regex_match(string, std::regex("((-?[1-9][0-9]*(;-?[1-9][0-9]*)*)?)")))
        throw "DynamicArray::s_TryParse: Invalid format, set to nullptr";
        
    return s_Parse(string);
}

DynamicArray::DynamicArray(): m_len(0), m_arr(nullptr) {
    ++s_instance_count;
}

DynamicArray::DynamicArray(const int& len): m_len(len), m_arr(new int [len]) {
    if (len < 0)
        throw "DynamicArray::DynamicArray: length less than zero";
        
    ++s_instance_count;
}

DynamicArray::DynamicArray(const DynamicArray& other): m_len(other.m_len), m_arr(new int [other.m_len]) {
    for (int i = 0; i < m_len; ++i)
        m_arr[i] = other.m_arr[i];
    
    ++s_instance_count;
}

DynamicArray::~DynamicArray() {
    --s_instance_count;
}

DynamicArray& DynamicArray::operator = (const DynamicArray& other) {
    m_len = other.m_len;
    m_arr = std::make_unique<int[]>(other.m_len);
    for (int i = 0; i < m_len; ++i)
        m_arr[i] = other.m_arr[i];
    ++s_instance_count;
    return *this;
}

std::istream& operator >> (std::istream& stream, DynamicArray& d) {
    std::cout << "Enter " << d.m_len << " elements: ";
    for (int i = 0; i < d.m_len; ++i)
        stream >> d.m_arr[i];
    return stream;
}

std::string DynamicArray::ToString() const {
    std::stringstream ss;
    for (int i = 0; i < m_len - 1; ++i)
        ss << m_arr[i] << ", ";
    ss << m_arr[m_len - 1];
    return ss.str();
}
