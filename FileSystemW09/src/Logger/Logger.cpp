#include <iostream>

#include "Logger.hpp"

Logger& Logger::GetInstance() {
    static Logger logger;
    return logger;
}

void Logger::Log(LOG_LEVEL level, LOG_DISPLAY display, const std::string& class_name, const std::string& func_name) {
    if (display == LOG_DISPLAY::CONSOLE) {
        std::string level_str;
        
    }
    else {

    }
}
