#ifndef Date_hpp
#define Date_hpp

#include <string>
#include <sstream>
#include <vector>
#include <regex>
#include "Tokenizer.hpp"

class Date {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<Date> s_Parse(const std::string& string);
    static std::unique_ptr<Date> s_TryParse(const std::string& string);
    static int s_GetDayOfMonth(const int& mon, const int& year);
    static bool s_IsLeap(const int& year);
    
private:
    int m_day, m_mon, m_year;
    
public:
    Date();
    Date(const int& day, const int& mon, const int& year);
    Date(const Date& other);
    ~Date();
    
public:
    std::string ToString() const;
};

#endif /* Date_hpp */
