#include "Tokenizer.hpp"

std::vector<std::string> Tokenizer::s_Parse(const std::string& string, const std::string& sep) {
    std::vector<std::string> tokens;
    unsigned long start_pos = 0;
    size_t found_pos = string.find(sep, start_pos);
    while (found_pos != std::string::npos) {
        tokens.emplace_back(string.substr(start_pos, found_pos - start_pos));
        
        start_pos = found_pos + sep.length();
        found_pos = string.find(sep, start_pos);
    }
    return tokens;
}
