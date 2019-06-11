#ifndef Fraction_hpp
#define Fraction_hpp

#include <string>
#include <sstream>
#include <vector>
#include <regex>
#include "Tokenizer.hpp"

class Fraction {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<Fraction> s_Parse(const std::string& string);
    static std::unique_ptr<Fraction> s_TryParse(const std::string& string);
    
private:
    int m_num, m_denom;
    
public:
    Fraction();
    Fraction(const int& num, const int& denom);
    Fraction(const Fraction& other);
    ~Fraction();
    
public:
    std::string ToString() const;
};

#endif /* Fraction_hpp */
