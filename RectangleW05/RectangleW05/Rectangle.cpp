#include "Rectangle.hpp"

std::unique_ptr<Rectangle> Rectangle::s_Parse(const std::string& string) {
    std::vector<std::string> str_vec = Tokenizer::s_Parse(string, ";");
    return std::make_unique<Rectangle>(*Point::s_Parse(str_vec[0]), *Point::s_Parse(str_vec[1]));
}
std::unique_ptr<Rectangle> Rectangle::s_TryParse(const std::string& string) {
    if (!std::regex_match(string, std::regex("([(]-?[0-9]+(\.[0-9]+)?,-?[0-9]+(\.[0-9]+)?[)];[(]-?[0-9]+(\.[0-9]+)?,-?[0-9]+(\.[0-9]+)?[)])")))
        throw "Rectangle::s_TryParse: Invalid format, set to nullptr";
    
    return s_Parse(string);
}

Rectangle::Rectangle(): m_top_left(Point()), m_bottom_right(Point()) {
    ++s_instance_count;
}

Rectangle::Rectangle(const Point& top_left, const Point& bottom_right): m_top_left(top_left), m_bottom_right(bottom_right) {
    ++s_instance_count;
}

Rectangle::Rectangle(const Rectangle& other): m_top_left(other.m_top_left), m_bottom_right(other.m_bottom_right) {
    ++s_instance_count;
}

Rectangle::~Rectangle() {
    --s_instance_count;
}

std::string Rectangle::ToString() const {
    std::stringstream ss;
    ss << "Start: " << m_top_left.ToString() << ", End: " << m_bottom_right.ToString();
    return ss.str();
}
