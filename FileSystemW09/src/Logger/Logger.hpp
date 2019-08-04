#pragma once

class Logger {
public:
    static Logger& GetLogger();

public:
    Logger() = delete;
    Logger(const Logger& logger) = delete;
    Logger& operator = (const Logger& other) = delete;
};