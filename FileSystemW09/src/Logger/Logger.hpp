#pragma once

#include <string>

enum class LOG_LEVEL {
    INFO,
    DEBUG,
    WARNING, 
    ERROR,
    FUNCTIONAL_MESSAGE, 
    FUNCTIONAL_ERROR
};

enum class LOG_DISPLAY {
    CONSOLE, 
    FILE
};

class Logger {
public:
    static Logger& GetInstance();

private:
    Logger() = default;

private:
    std::string GetTime();

public:
    Logger(const Logger& logger) = delete;
    Logger(const Logger&& logger) = delete;
    Logger& operator = (const Logger& other) = delete;
    Logger& operator = (const Logger&& other) = delete;

public:
    void Log(LOG_LEVEL level, LOG_DISPLAY display, const std::string& class_name, const std::string& func_name);
};