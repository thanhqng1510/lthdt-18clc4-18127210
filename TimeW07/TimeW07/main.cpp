#include <iostream>

#include "Time.hpp"
#include "GMTTime.hpp"

int main(int argc, const char * argv[]) {
    GMTTime t;
    std::cout << t.ToString(0) << "\n" << t.ToString(15) << "\n";
}
