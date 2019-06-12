#include "Point.hpp"

std::unique_ptr<Point> Point::s_Parse(const std::string& string) {
    std::vector<std::string> str_vec = Tokenizer::s_Parse(string, ",");
    str_vec[0] = str_vec[0].substr(1);
    str_vec[1] = str_vec[1].substr(0, str_vec[1].size() - 1);
    return std::make_unique<Point>(atof(str_vec[0].c_str()), atof(str_vec[1].c_str()));
}

std::unique_ptr<Point> Point::s_TryParse(const std::string& string) {
    if (!std::regex_match(string, std::regex("([(]-?[0-9]+(\.[0-9]+)?,-?[0-9]+(\.[0-9]+)?[)])")))
        throw "Point::s_TryParse: Invalid format, set to nullptr";
    
    return s_Parse(string);
}

Point::Point(): m_x(0), m_y(0) {
    ++s_instance_count;
}

Point::Point(const float& x, const float& y): m_x(x), m_y(y) {
    ++s_instance_count;
}

Point::Point(const Point& other): m_x(other.m_x), m_y(other.m_y) {
    ++s_instance_count;
}

Point::~Point() {
    --s_instance_count;
}

float Point::CalcDistanceTo(const Point& other) const {
    float dx = m_x - other.m_x, dy = m_y - other.m_y;
    return sqrt(dx * dx + dy * dy);
}

std::string Point::ToString() const {
    std::stringstream ss;
    ss << "(" << m_x << ", " << m_y << ")";
    return ss.str();
}

