#ifndef Time_hpp
#define Time_hpp

#include <ctime>

class Time {
protected:
    int m_hour, m_min, m_sec;
    
public:
    inline Time() {
        time_t now = time(nullptr);
        tm* t = localtime(&now);
        m_hour = t->tm_hour;
        m_min = t->tm_min;
        m_sec = t->tm_sec;
    }
    
    inline Time(int hour, int min, int sec) : m_hour(hour), m_min(min), m_sec(sec) {
        m_hour = (m_hour > 23) ? 23 : (m_hour < 0) ? 0 : m_hour;
        m_min = (m_min > 59) ? 59 : (m_min < 0) ? 0 : m_min;
        m_sec = (m_sec > 59) ? 59 : (m_sec < 0) ? 0 : m_sec;
    }
    
    virtual ~Time() = default;
};

#endif /* Time_hpp */
