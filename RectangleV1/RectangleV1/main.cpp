#include "rect.hpp"

int main(int argc, const char * argv[]) {
    rectangle r;
    std::cout << r.SetTopLeft(point(2, 3)).GetTopLeft().X() << std::endl;
}
