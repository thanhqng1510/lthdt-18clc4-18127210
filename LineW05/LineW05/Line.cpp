#include "Line.hpp"

std::unique_ptr<Line> Line::s_Parse(const std::string& string) {
    std::vector<std::string> str_vec = Tokenizer::s_Parse(string, ";");
    return std::make_unique<Line>(*Point::s_Parse(str_vec[0]), *Point::s_Parse(str_vec[1]));
}

std::unique_ptr<Line> Line::s_TryParse(const std::string& string) {
    if (!std::regex_match(string, std::regex("([(][0-9]+(\.[0-9]+)?[,][0-9]+(\.[0-9]+)?[)][;][(][0-9]+(\.[0-9]+)?[,][0-9]+(\.[0-9]+)?[)])")))
        throw "Line::s_TryParse: Invalid format";
    
    return Line::s_Parse(string);
}

Line::Line(): m_start(Point()), m_end(Point()) {
    ++s_instance_count;
}

Line::Line(const Point& start, const Point& end): m_start(start), m_end(end) {
    ++s_instance_count;
}

Line::Line(const Line& other): m_start(other.m_start), m_end(other.m_end) {
    ++s_instance_count;
}

Line::~Line() {
    --s_instance_count;
}

std::string Line::ToString() const {
    std::stringstream ss;
    ss << "Start: " << m_start.ToString() << ", End: " << m_end.ToString();
    return ss.str();
}
