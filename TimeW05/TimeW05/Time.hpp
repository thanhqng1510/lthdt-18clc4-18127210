#ifndef Time_hpp
#define Time_hpp

#include <string>
#include <ctime>
#include <sstream>
#include <vector>
#include <regex>
#include "Tokenizer.hpp"

class Time {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<Time> s_Parse(const std::string& string);
    static std::unique_ptr<Time> s_TryParse(const std::string& string);
    
private:
    int m_hour, m_min, m_sec;
    
public:
    Time();
    Time(const int& hour, const int& min, const int& sec);
    Time(const Time& other);
    ~Time();

public:
    std::string ToString() const;
};

#endif /* Time_hpp */
