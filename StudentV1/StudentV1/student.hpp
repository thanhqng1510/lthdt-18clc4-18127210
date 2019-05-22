#ifndef student_hpp
#define student_hpp

#include <iostream>
#include <string>
using namespace std;

class student {
    string _firstName, _middleName, _lastName;
    
public:
    student();
    student(const string&, const string&, const string&);
    ~student();
    string GetFirstName() const;
    string GetMiddleName() const;
    string GetLastName() const;
    student& SetFirstName(const string&);
    student& SetMiddleName(const string&);
    student& SetLastName(const string&);
};

#endif /* student_hpp */
