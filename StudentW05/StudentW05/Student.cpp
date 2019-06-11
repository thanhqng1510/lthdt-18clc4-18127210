#include "Student.hpp"

std::unique_ptr<Student> Student::s_Parse(const std::string& string) {
    std::vector<std::string> string_vec = Tokenizer::s_Parse(string, " ");
    
    if (string_vec.size() == 2)
        return std::make_unique<Student>(string_vec[0], "", string_vec[1]);
    else if (string_vec.size() == 3)
        return std::make_unique<Student>(string_vec[0], string_vec[1], string_vec[2]);
    else {
        std::string temp = "";
        for (int i = 1; i < string_vec.size() - 1; ++i)
            temp += string_vec[i] + " ";
        temp.erase(temp.length() - 1);
        return std::make_unique<Student>(string_vec[0], temp, string_vec.back());
    }
}

std::unique_ptr<Student> Student::s_TryParse(const std::string& string) {
    if (!std::regex_match(string + " ", std::regex("([A-Z][a-z]+[ ]([A-Z][a-z]+[ ])+)")))
        throw "Student::s_TryParse: Invalid format, set to nullptr";
    
    return Student::s_Parse(string);
}

Student::Student(): m_firstname(""), m_midname(""), m_lastname("") {
    ++s_instance_count;
}

Student::Student(const std::string& firstname, const std::string& midname, const std::string& lastname):
    m_firstname(firstname), m_midname(midname), m_lastname(lastname) {
    ++s_instance_count;
}

Student::Student(const Student& other):
    m_firstname(other.m_firstname), m_midname(other.m_midname), m_lastname(other.m_lastname) {
    ++s_instance_count;
}

Student::~Student() {
    --s_instance_count;
}

std::string Student::ToString() const {
    return m_firstname + " " + (m_midname == "" ? "" : (m_midname + " ")) + m_lastname;
}
