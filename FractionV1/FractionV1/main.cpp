#include "fraction.hpp"

int main() {
    fraction f(2, 5);
    std::cout << f.GetNum() << "/" << f.GetNum() << std::endl;
    std::cout << f.SetNum(10).SetDenom(6).GetNum() << "/" << f.GetDenom() << std::endl;
}
