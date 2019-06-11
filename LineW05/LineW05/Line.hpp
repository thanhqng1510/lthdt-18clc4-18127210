#ifndef Line_hpp
#define Line_hpp

#include <sstream>
#include <regex>
#include "Point.hpp"
#include "Tokenizer.hpp"

class Line {
public:
    static int s_instance_count;
    
public:
    static std::unique_ptr<Line> s_Parse(const std::string& string);
    static std::unique_ptr<Line> s_TryParse(const std::string& string);
    
private:
    Point m_start, m_end;
    
public:
    Line();
    Line(const Point& start, const Point& end);
    Line(const Line& other);
    ~Line();
    
public:
    inline Point& GetStart() { return m_start; }
    inline Point& GetEnd() { return m_end; }
    
public:
    std::string ToString() const;
};

#endif /* Line_hpp */
