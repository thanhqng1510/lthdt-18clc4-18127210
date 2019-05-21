#include "fraction.hpp"

fraction::fraction() : _nu(0), _de(1) {}

fraction::fraction(const int& nu, const int& de) : _nu(nu), _de(de) {}

fraction::~fraction() {}

int fraction::GetNum() {
    return _nu;
}

int fraction::GetDenom() {
    return _de;
}

fraction& fraction::SetNum(const int& nu) {
    _nu = nu;
    return *this;
}

fraction& fraction::SetDenom(const int& de) {
    _de = de;
    return *this;
}
