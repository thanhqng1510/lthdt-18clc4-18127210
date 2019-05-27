#include "Student.hpp"

Student::Student(const std::string& first_name, const std::string& middle_name, const std::string& last_name):
m_first_name(first_name), m_middle_name(middle_name), m_last_name(last_name) {}

Student(const Student& other):
m_first_name(other.m_first_name), m_middle_name(other.m_middle_name), m_last_name(other.m_last_name) {}

Student::~Student() {}

std::string Student::GetFirstName() const {
    return m_first_name;
}

std::string Student::GetMiddleName() const {
    return m_middle_name;
}

std::string Student::GetLastName() const {
    return m_last_name;
}

Student& Student::SetFirstName(const std::string& name) {
    m_first_name = name;
    return *this;
}

Student& Student::SetMiddleName(const std::string& name) {
    m_middle_name = name;
    return *this;
}

Student& Student::SetLastName(const std::string& name) {
    m_last_name = name;
    return *this;
}

std::string Student::FullName() const {
    return (m_first_name + " " + m_middle_name + " " + m_last_name);
}
