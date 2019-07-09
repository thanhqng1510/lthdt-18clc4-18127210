#include "Car.hpp"
#include "Carbriolet.hpp"

int main() {
    Car c1;
    c1.StartEngine();
    std::cout << "----------\n";
    Carbriolet c2;
    c2.StartEngine();
}
