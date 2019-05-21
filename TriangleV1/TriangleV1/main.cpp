#include "triangle.hpp"

int main() {
    triangle t(point(0, 0), point(1, 2), point(-10, 3));
    std::cout << t.GetB().X() << " " << t.GetB().Y() << std::endl;
}
