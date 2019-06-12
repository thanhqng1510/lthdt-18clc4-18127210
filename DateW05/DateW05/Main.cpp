#include <iostream>
#include <string>
#include "Date.hpp"

int Date::s_instance_count = 0;

int main() {
    std::string date_str = "17/7/2000";
    std::unique_ptr<Date> d;
    
    try {
        d = Date::s_TryParse(date_str);
    }
    catch (const char* message) {
        std::cout << message << std::endl;
        d = nullptr;
    }
    
    if (d)
        std::cout << d->ToString() << std::endl;
}
