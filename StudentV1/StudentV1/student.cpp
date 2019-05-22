#include "student.hpp"

student::student() : _firstName(""), _middleName(""), _lastName("") {}

student::student(const string& fisrt, const string& middle, const string& last)
    : _firstName(fisrt), _middleName(middle), _lastName(last) {}

student::~student() {}

string student::GetFirstName() const {
    return _firstName;
}

string student::GetMiddleName() const {
    return _middleName;
}
string student::GetLastName() const {
    return _lastName;
}

student& student::SetFirstName(const string& first) {
    _firstName = first;
    return *this;
}

student& student::SetMiddleName(const string& middle) {
    _middleName = middle;
    return *this;
}

student& student::SetLastName(const string& last) {
    _lastName = last;
    return *this;
}

