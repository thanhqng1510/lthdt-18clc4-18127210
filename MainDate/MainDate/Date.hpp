#ifndef Date_hpp
#define Date_hpp

#include <ctime>
#include <iostream>

int GetDayOfMonth(const int& mon, const int& year);
bool IsLeap(const int& year);

class Date {
    int m_day, m_mon, m_year, m_abs_day;
public:
    Date();
    Date(const int& year);
    Date(const int& year, const int& mon);
    Date(const int& year, const int& mon, const int& day);
    Date(const Date& other) = default;
public:
    Date& operator ++ ();
    Date operator ++ (int x);
    Date& operator -- ();
    Date operator -- (int x);
    Date& operator = (const Date& other) = default;
    Date& operator += (const int& day);
    Date& operator -= (const int& day);
    friend Date operator + (Date d, const int& day);
    friend Date operator - (Date d, const int& day);
    bool operator > (const Date& other) const;
    bool operator < (const Date& other) const;
    bool operator == (const Date& other) const;
    bool operator >= (const Date& other) const;
    bool operator <= (const Date& other) const;
    bool operator != (const Date& other) const;
public:
    friend std::ostream& operator << (std::ostream& stream, const Date& d);
    friend std::istream& operator >> (std::istream& stream, Date& d);
public:
    Date Tomorrow() const;
    Date Yesterday() const;
    operator int() const;
    operator long() const;
};

#endif /* Date_hpp */
