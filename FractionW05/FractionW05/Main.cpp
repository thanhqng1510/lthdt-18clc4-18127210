#include <iostream>
#include <string>
#include "Fraction.hpp"

int Fraction::s_instance_count = 0;

int main() {
    std::string fraction_str = "3/5";
    std::unique_ptr<Fraction> f;
    
    try {
        f = Fraction::s_TryParse(fraction_str);
    }
    catch(const char* message) {
        std::cout << message << std::endl;
        f = nullptr;
    }
    
    if (f)
        std::cout << f->ToString() << std::endl;
}
