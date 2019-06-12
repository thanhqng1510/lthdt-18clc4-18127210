#include "Date.hpp"

std::unique_ptr<Date> Date::s_Parse(const std::string& string) {
    std::vector<std::string> str_vec = Tokenizer::s_Parse(string, "/");
    return std::make_unique<Date>(stoi(str_vec[0]), stoi(str_vec[1]), stoi(str_vec[2]));
}

std::unique_ptr<Date> Date::s_TryParse(const std::string& string) {
    if (!std::regex_match(string, std::regex("([1-3][0-9]?/[1-9][0-2]?/[0-9]+)")))
        throw "Date::s_TryParse: Invalid format, set to nullptr";
    
    return s_Parse(string);
}

int Date::s_GetDayOfMonth(const int& mon, const int& year) {
    switch (mon) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 28 + s_IsLeap(year);
    }
}

bool Date::s_IsLeap(const int& year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

Date::Date() {
    time_t now = time(nullptr);
    tm* time = localtime(&now);
    m_day = time->tm_mday;
    m_mon = time->tm_mon + 1;
    m_year = time->tm_year + 1900;
    
    ++s_instance_count;
}

Date::Date(const int& day, const int& mon, const int& year) {
    if (day > s_GetDayOfMonth(mon, year) || day < 1 || mon > 12 || mon < 1)
        throw "Out of range exception";
    
    m_day = day;
    m_mon = mon;
    m_year = year;
    
    ++s_instance_count;
}

Date::Date(const Date& other): m_day(other.m_day), m_mon(other.m_mon), m_year(other.m_year) {
    ++s_instance_count;
}

Date::~Date() {
    --s_instance_count;
}

std::string Date::ToString() const {
    std::stringstream ss;
    ss << m_day << "/" << m_mon << "/" << m_year;
    return ss.str();
}
