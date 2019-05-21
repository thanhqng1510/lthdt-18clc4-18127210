#include "circle.hpp"

int main() {
    circle c(point(1, 2), 5.0);
    std::cout << c.GetCenter().X() << " " << c.GetCenter().Y() << " " << c.GetRadius() << std::endl;
}
