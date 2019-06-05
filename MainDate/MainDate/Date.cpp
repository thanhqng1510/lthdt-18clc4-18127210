#include "Date.hpp"

int GetDayOfMonth(const int& mon, const int& year) {
    switch (mon) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 28 + IsLeap(year);
    }
}

bool IsLeap(const int& year) {
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
    m_abs_day = time->tm_yday + 1;
}

Date::Date(const int& year): m_day(1), m_mon(1), m_year(year), m_abs_day(1) {}

Date::Date(const int& year, const int& mon) {
    if (mon > 12 || mon < 1)
        throw "Out of range exception";
    m_day = 1;
    m_mon = mon;
    m_year = year;
    m_abs_day = 0;
    for (int i = 1; i < mon; ++i)
        m_abs_day += GetDayOfMonth(mon, year);
    ++m_abs_day;
}

Date::Date(const int& year, const int& mon, const int& day) {
    if (mon > 12 || mon < 1 || day > GetDayOfMonth(mon, year) || day < 1)
        throw "Out of range exception";
    m_day = day;
    m_mon = mon;
    m_year = year;
    m_abs_day = 0;
    for (int i = 1; i < mon; ++i)
        m_abs_day += GetDayOfMonth(mon, year);
    m_abs_day += day;
}

Date& Date::operator ++ () {
    ++m_day;
    ++m_abs_day;
    if (m_day > GetDayOfMonth(m_mon, m_year)) {
        ++m_mon;
        m_day = 1;
    }
    if (m_mon > 12) {
        ++m_year;
        m_mon = 1;
    }
    return *this;
}

Date Date::operator ++ (int x) {
    Date temp = *this;
    ++(*this);
    return temp;
}

Date& Date::operator -- () {
    --m_day;
    --m_abs_day;
    if (m_day < 1) {
        --m_mon;
        m_day = GetDayOfMonth(m_mon, m_year);
    }
    if (m_mon < 1) {
        --m_year;
        m_mon = 12;
        m_day = 31;
    }
    return *this;
}

Date Date::operator -- (int x) {
    Date temp = *this;
    --(*this);
    return temp;
}

Date& Date::operator += (const int& day) {
    for (int i = 0; i < day; ++i)
        ++(*this);
    return *this;
}
Date& Date::operator -= (const int& day) {
    for (int i = 0; i < day; ++i)
        --(*this);
    return *this;
}

Date operator + (Date d, const int& day) {
    for (int i = 0; i < day; ++i)
        ++d;
    return d;
}

Date operator - (Date d, const int& day) {
    for (int i = 0; i < day; ++i)
        --d;
    return d;
}

std::ostream& operator << (std::ostream& stream, const Date& d) {
    return stream << d.m_day << "/" << d.m_mon << "/" << d.m_year;
}

std::istream& operator >> (std::istream& stream, Date& d) {
    std::cout << "Enter day, month, year: ";
    stream >> d.m_day >> d.m_mon >> d.m_year;
    if (d.m_mon > 12 || d.m_mon < 1 || d.m_day > GetDayOfMonth(d.m_mon, d.m_year) || d.m_day < 1)
        throw "Out of range exception";
    d.m_abs_day = 0;
    for (int i = 1; i < d.m_mon; ++i)
        d.m_abs_day += GetDayOfMonth(d.m_mon, d.m_year);
    d.m_abs_day += d.m_day;
    return stream;
}

Date Date::Tomorrow() const {
    return (*this + 1);
}

Date Date::Yesterday() const {
    return (*this - 1);
}

Date::operator int() const {
    return m_abs_day;
}

Date::operator long() const {
    long res = 0;
    for (int i = 1; i < m_year; ++i)
        res += (365 + IsLeap(i));
    res += m_abs_day;
    return res - 1;
}
