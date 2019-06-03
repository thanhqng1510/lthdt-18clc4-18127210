#ifndef fraction_hpp
#define fraction_hpp

#include <iostream>

class Fraction {
    int m_nu, m_de;
    
public:
    Fraction();
    Fraction(const int& nu, const int& de);
    Fraction(const Fraction& f) = default;
public:
    Fraction& operator = (const Fraction& other) = default;
    Fraction& operator += (const Fraction& other);
    Fraction& operator -= (const Fraction& other);
    Fraction& operator *= (const Fraction& other);
    Fraction& operator /= (const Fraction& other);
    
    Fraction& operator += (const int& other);
    Fraction& operator -= (const int& other);
    Fraction& operator *= (const int& other);
    Fraction& operator /= (const int& other);
    
    friend Fraction operator + (Fraction left, const Fraction& right);
    friend Fraction operator - (Fraction left, const Fraction& right);
    friend Fraction operator * (Fraction left, const Fraction& right);
    friend Fraction operator / (Fraction left, const Fraction& right);
    
    friend Fraction operator + (Fraction left, const int& right);
    friend Fraction operator - (Fraction left, const int& right);
    friend Fraction operator * (Fraction left, const int& right);
    friend Fraction operator / (Fraction left, const int& right);
    
    friend Fraction operator + (const int& left, const Fraction& right);
    friend Fraction operator - (const int& left, const Fraction& right);
    friend Fraction operator * (const int& left, const Fraction& right);
    friend Fraction operator / (const int& left, const Fraction& right);
    
    bool operator > (const Fraction& other) const;
    bool operator >= (const Fraction& other) const;
    bool operator < (const Fraction& other) const;
    bool operator <= (const Fraction& other) const;
    bool operator == (const Fraction& other) const;
    bool operator != (const Fraction& other) const;
    
    Fraction& operator ++ ();
    Fraction operator ++ (int x);
    Fraction& operator -- ();
    Fraction operator -- (int x);
    
    explicit operator int () const;
    explicit operator float () const;
    
    friend std::ostream& operator << (std::ostream& stream, const Fraction& f);
    friend std::istream& operator >> (std::istream& stream, Fraction& f);
};

#endif /* fraction_hpp */
