#ifndef GMTTime_hpp
#define GMTTime_hpp

#include <string>
#include <sstream>

#include "Time.hpp"

class GMTTime : public Time {
public:
    ~GMTTime() override = default;
    
public:
    inline std::string ToString(int gmt) const {
        std::stringstream ss;
        ss << (m_hour + gmt) % 24 << ":" << m_min << ":" << m_sec;
        return ss.str();
    }
};

#endif /* GMTTime_hpp */
