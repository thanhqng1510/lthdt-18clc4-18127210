#include "Circle.hpp"

std::unique_ptr<Circle> Circle::s_Parse(const std::string& string) {
    std::vector<std::string> str_vec = Tokenizer::s_Parse(string, ";");
    return std::make_unique<Circle>(*Point::s_Parse(str_vec[0]), atof(str_vec[1].c_str()));
}

std::unique_ptr<Circle> Circle::s_TryParse(const std::string& string) {
    if (!std::regex_match(string, std::regex("([(][0-9]+(\.[0-9]+)?,[0-9]+(\.[0-9]+)?[)];[0-9]+(\.[0-9]+)?)")))
        throw "Circle::s_TryParse: Invalid format";
    
    return Circle::s_Parse(string);
}

Circle::Circle(): m_center(Point()), m_rad(0) {
    ++s_instance_count;
}

Circle::Circle(const Point& center, const float& rad): m_center(center), m_rad(rad) {
    ++s_instance_count;
}

Circle::Circle(const Circle& other): m_center(other.m_center), m_rad(other.m_rad) {
    ++s_instance_count;
}

Circle::~Circle() {
    --s_instance_count;
}

std::string Circle::ToString() const {
    std::stringstream ss;
    ss << "Center: " << m_center.ToString() << ", Radius: " << m_rad;
    return ss.str();
}
