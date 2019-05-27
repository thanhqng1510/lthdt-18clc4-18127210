#ifndef Student_hpp
#define Student_hpp

#include <string>

class Student {
    std::string m_first_name, m_middle_name, m_last_name;
public:
    Student() = default;
    Student(const std::string& first_name, const std::string& middle_name, const std::string& last_name);
    ~Student();
public:
    std::string GetFirstName() const;
    std::string GetMiddleName() const;
    std::string GetLastName() const;
    Student& SetFirstName(const std::string& name);
    Student& SetMiddleName(const std::string& name);
    Student& SetLastName(const std::string& name);
public:
    std::string FullName() const;
};

#endif /* Student_hpp */
