#include "Logger.hpp"

Logger& Logger::GetLogger() {
    static Logger logger;
    return logger;
}
