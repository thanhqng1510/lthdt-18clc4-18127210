#include "lineV1.hpp"

int main() {
    using namespace std;
    
    line l;
    cout << l.GetStart().X() << " " << l.GetStart().Y() << endl;
    cout << l.SetStart(point(10, 5)).GetStart().X() << " " << l.GetStart().Y() << endl;
}
