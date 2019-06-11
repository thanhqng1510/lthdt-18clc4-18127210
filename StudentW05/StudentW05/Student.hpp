#ifndef Student_hpp
#define Student_hpp

#include <string>
#include <vector>
#include <regex>
#include "Tokenizer.hpp"

class Student {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<Student> s_Parse(const std::string& string);
    static std::unique_ptr<Student> s_TryParse(const std::string& string);
    
private:
    std::string m_firstname, m_midname, m_lastname;
    
public:
    Student();
    Student(const std::string& firstname, const std::string& midname, const std::string& lastname);
    Student(const Student& other);
    ~Student();
    
public:
    std::string ToString() const;
};

#endif /* Student_hpp */
