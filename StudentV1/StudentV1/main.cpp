#include "student.hpp"

int main() {
    student s("Nguyen", "Quy", "Thanh");
    cout << s.GetFirstName() << " " << s.GetMiddleName() << " " << s.GetLastName() << endl;
}
