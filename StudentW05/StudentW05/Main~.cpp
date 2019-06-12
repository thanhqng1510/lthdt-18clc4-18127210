#include <iostream>
#include <string>
#include "Student.hpp"

int Student::s_instance_count = 0;

int main() {
    std::string student_str = "Nguyen Quy Thanh";
    std::unique_ptr<Student> s;
    
    try {
        s = Student::s_TryParse(student_str);
    }
    catch (const char* message) {
        std::cout << message << std::endl;
        s = nullptr;
    }
    
    if (s)
        std::cout << s->ToString() << std::endl;
}
