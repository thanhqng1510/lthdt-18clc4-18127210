#include "Fraction.hpp"

std::unique_ptr<Fraction> Fraction::s_Parse(const std::string& string) {
    std::vector<std::string> string_vec = Tokenizer::s_Parse(string, "/");
    return std::make_unique<Fraction>(stoi(string_vec[0]), stoi(string_vec[1]));
}

std::unique_ptr<Fraction> Fraction::s_TryParse(const std::string& string) {
    if (!std::regex_match(string, std::regex("(-?[0-9]+/-?[1-9]+)")))
        throw "Fraction::s_TryParse: Invalid format, set to nullptr";
    
    return s_Parse(string);
}

Fraction::Fraction(): m_num(0), m_denom(1) {
    ++s_instance_count;
}

Fraction::Fraction(const int& num, const int& denom): m_num(num), m_denom(denom) {
    if (m_denom == 0)
        throw "Fraction::Fraction: divided by zero";
    
    ++s_instance_count;
}

Fraction::Fraction(const Fraction& other): m_num(other.m_num), m_denom(other.m_denom) {
    ++s_instance_count;
}

Fraction::~Fraction() {
    --s_instance_count;
}

std::string Fraction::ToString() const {
    std::stringstream ss;
    ss << m_num << "/" << m_denom;
    return ss.str();
}
