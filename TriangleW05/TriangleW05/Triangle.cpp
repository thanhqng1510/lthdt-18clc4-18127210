#include "Triangle.hpp"

std::unique_ptr<Triangle> Triangle::s_Parse(const std::string& string) {
    std::vector<std::string> str_vec = Tokenizer::s_Parse(string, ";");
    return std::make_unique<Triangle>(*Point::s_Parse(str_vec[0]), *Point::s_Parse(str_vec[1]), *Point::s_Parse(str_vec[2]));
}

std::unique_ptr<Triangle> Triangle::s_TryParse(const std::string& string) {
    if (!std::regex_match(string, std::regex("([(][0-9]+(\.[0-9]+)?,[0-9]+(\.[0-9]+)?[)];[(][0-9]+(\.[0-9]+)?,[0-9]+(\.[0-9]+)?[)];[(][0-9]+(\.[0-9]+)?,[0-9]+(\.[0-9]+)?[)])")))
        throw "Triangle::s_TryParse: Invalid format, set to nullptr";
    
    return Triangle::s_Parse(string);
}

Triangle::Triangle(): m_a(Point()), m_b(Point()), m_c(Point()) {
    ++s_instance_count;
}

Triangle::Triangle(const Point& a, const Point& b, const Point& c): m_a(a), m_b(b), m_c(c) {
    ++s_instance_count;
}

Triangle::Triangle(const Triangle& other): m_a(other.m_a), m_b(other.m_b), m_c(other.m_c) {
    ++s_instance_count;
}

Triangle::~Triangle() {
    --s_instance_count;
}

std::string Triangle::ToString() const {
    std::stringstream ss;
    ss << "A: " << m_a.ToString() << ", B: " << m_b.ToString() << ", C: " << m_c.ToString();
    return ss.str();
}
