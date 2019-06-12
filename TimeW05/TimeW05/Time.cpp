#include "Time.hpp"

std::unique_ptr<Time> Time::s_Parse(const std::string& string) {
    std::vector<std::string> str_vec = Tokenizer::s_Parse(string, ":");
    return std::make_unique<Time>(stoi(str_vec[0]), stoi(str_vec[1]), stoi(str_vec[2]));
}

std::unique_ptr<Time> Time::s_TryParse(const std::string& string) {
    if (!std::regex_match(string, std::regex("([0-9]{1,2}:[0-9]{1,2}:[0-9]{1,2})")))
        throw "Time::s_TryParse: Invalid format, set to nullptr";
    
    return Time::s_Parse(string);
}

Time::Time() {
    time_t now = time(nullptr);
    tm* time = localtime(&now);
    m_hour = time->tm_hour;
    m_min = time->tm_min;
    m_sec = time->tm_sec;
    
    ++s_instance_count;
}

Time::Time(const int& hour, const int& min, const int& sec): m_hour(hour), m_min(min), m_sec(sec) {
    if (hour >= 24 || min >= 60 || sec >= 60)
        throw "Time::Time: Initial value too big";
        
    ++s_instance_count;
}

Time::Time(const Time& other): m_hour(other.m_hour), m_min(other.m_min), m_sec(other.m_sec) {
    ++s_instance_count;
}

Time::~Time() {
    --s_instance_count;
}

std::string Time::ToString() const {
    std::stringstream ss;
    ss << m_hour << ":" << m_min << ":" << m_sec;
    return ss.str();
}
