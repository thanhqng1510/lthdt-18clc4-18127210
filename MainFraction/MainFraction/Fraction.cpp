#include "Fraction.hpp"

Fraction::Fraction(): m_nu(0), m_de(1) {}

Fraction::Fraction(const int& nu, const int& de): m_nu(nu), m_de(de) {}

Fraction& Fraction::operator += (const Fraction& other) {
    if (m_de == 0 || other.m_de == 0)
        throw "Denominator has zero value exception";
    m_nu = m_nu * other.m_de + m_de * other.m_nu;
    m_de *= other.m_de;
    return *this;
}

Fraction& Fraction::operator -= (const Fraction& other) {
    return (*this += Fraction(-other.m_nu, other.m_de));
}

Fraction& Fraction::operator *= (const Fraction& other) {
    if (m_de == 0 || other.m_de == 0)
        throw "Denominator has zero value exception";
    m_nu *= other.m_nu;
    m_de *= other.m_de;
    return *this;
}

Fraction& Fraction::operator /= (const Fraction& other) {
    return (*this *= Fraction(other.m_de, other.m_nu));
}

Fraction& Fraction::operator += (const int& other) {
    return (*this += Fraction(other, 1));
}

Fraction& Fraction::operator -= (const int& other) {
    return (*this -= Fraction(other, 1));
}

Fraction& Fraction::operator *= (const int& other) {
    return (*this *= Fraction(other, 1));
}

Fraction& Fraction::operator /= (const int& other) {
    return (*this /= Fraction(other, 1));
}

Fraction operator + (Fraction left, const Fraction& right) {
    return left += right;
}

Fraction operator - (Fraction left, const Fraction& right) {
    return left -= right;
}

Fraction operator * (Fraction left, const Fraction& right) {
    return left *= right;
}

Fraction operator / (Fraction left, const Fraction& right) {
    return left /= right;
}

Fraction operator + (Fraction left, const int& right) {
    return left += right;
}

Fraction operator - (Fraction left, const int& right) {
    return left -= right;
}

Fraction operator * (Fraction left, const int& right) {
    return left *= right;
}

Fraction operator / (Fraction left, const int& right) {
    return left /= right;
}

Fraction operator + (const int& left, const Fraction& right) {
    if (right.m_de == 0)
        throw "Denominator has zero value exception";
    return Fraction(left * right.m_de + right.m_nu, right.m_de);
}

Fraction operator - (const int& left, const Fraction& right) {
    return left + Fraction(-right.m_nu, right.m_de);
}

Fraction operator * (const int& left, const Fraction& right) {
    if (right.m_de == 0)
        throw "Denominator has zero value exception";
    return Fraction(left * right.m_nu, right.m_de);
}

Fraction operator / (const int& left, const Fraction& right) {
    return left * Fraction(right.m_de, right.m_nu);
}

bool Fraction::operator > (const Fraction& other) const {
    if (m_de == 0 || other.m_de == 0)
        throw "Denominator has zero value exception";
    return float(m_nu) / m_de > float(other.m_nu) / other.m_de;
}

bool Fraction::operator < (const Fraction& other) const {
    if (m_de == 0 || other.m_de == 0)
        throw "Denominator has zero value exception";
    return float(m_nu) / m_de < float(other.m_nu) / other.m_de;
}

bool Fraction::operator == (const Fraction& other) const {
    if (m_de == 0 || other.m_de == 0)
        throw "Denominator has zero value exception";
    return float(m_nu) / m_de == float(other.m_nu) / other.m_de;
}

bool Fraction::operator >= (const Fraction& other) const {
    return *this > other || *this == other;
}

bool Fraction::operator <= (const Fraction& other) const {
    return *this < other || *this == other;
}

bool Fraction::operator != (const Fraction& other) const {
    return !(*this == other);
}

Fraction& Fraction::operator ++ () {
    if (m_de == 0)
        throw "Denominator has zero value exception";
    m_nu += m_de;
    return *this;
}

Fraction Fraction::operator ++ (int x) {
    Fraction temp = *this;
    ++(*this);
    return temp;
}

Fraction& Fraction::operator -- () {
    if (m_de == 0)
        throw "Denominator has zero value exception";
    m_nu -= m_de;
    return *this;
}

Fraction Fraction::operator -- (int x) {
    Fraction temp = *this;
    --(*this);
    return temp;
}

Fraction::operator int () const {
    if (m_de == 0)
        throw "Denominator has zero value exception";
    return m_nu / m_de;
}

Fraction::operator float () const {
    if (m_de == 0)
        throw "Denominator has zero value exception";
    return float(m_nu) / m_de;
}

std::ostream& operator << (std::ostream& stream, const Fraction& f) {
    if (f.m_de == 0)
        throw "Denominator has zero value exception";
    return stream << f.m_nu << "/" << f.m_de;
}

std::istream& operator >> (std::istream& stream, Fraction& f) {
    std::cout << "Input num and denom: ";
    stream >> f.m_nu >> f.m_de;
    if (f.m_de == 0)
        throw "Denominator has zero value exception";
    return stream;
}
