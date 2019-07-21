#include "AcademicGate.hpp"

AcademicGate::AcademicGate() 
: m_intel(0) {}

AcademicGate::AcademicGate(int intel) 
: m_intel(intel) {}

void AcademicGate::Input() {
    std::cout << "Academic gate\n";
    std::cout << "Enter intel: ";
    std::cin >> m_intel;
}

void AcademicGate::Output() const {
    std::cout << "Academic gate\n";
    std::cout << "Intel: " << m_intel << "\n";
}

bool AcademicGate::Allow(PersonInterface* const person) const {
    if (m_intel > person->m_intel)
        return false;
            
    return true;
}