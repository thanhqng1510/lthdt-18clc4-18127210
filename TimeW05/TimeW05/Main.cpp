#include <iostream>
#include <string>
#include "Time.hpp"

int Time::s_instance_count = 0;

int main() {
    std::string time_str = "12:54:9";
    std::unique_ptr<Time> t;
    
    try {
        t = Time::s_TryParse(time_str);
    }
    catch (const char* message) {
        std::cout << message << std::endl;
        t = nullptr;
    }
    
    if (t)
        std::cout << t->ToString() << std::endl;
}
