#include <vector>

#include "GateInterface.hpp"
#include "BussinessGate.hpp"
#include "AcademicGate.hpp"
#include "PowerGate.hpp"
#include "Prince.hpp"

int main() {
    int bussiness, academic, power;
    std::cout << "Enter number of bussiness gates: ";
    std::cin >> bussiness;
    std::cout << "Enter number of academic gates: ";
    std::cin >> academic;
    std::cout << "Enter number of power gates: ";
    std::cin >> power;

    std::vector<GateInterface*> vec_gate(bussiness + academic + power);
    int i = 0;
    while (i < bussiness)
        vec_gate[i++] = new BussinessGate;
    while (i < bussiness + academic)
        vec_gate[i++] = new AcademicGate;
    while (i < bussiness + academic + power)
        vec_gate[i++] = new PowerGate;
    
    for (GateInterface* i : vec_gate)
        i->Input();

    Prince prince;
    prince.Input();

    for (GateInterface* i : vec_gate)
        if (!i->Allow(&prince)) {
            std::cout << "You can not pass\n";
            return 0;
        }
    std::cout << "You passed\n";
}