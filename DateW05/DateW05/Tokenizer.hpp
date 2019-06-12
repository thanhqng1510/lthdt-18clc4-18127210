#ifndef Tokenizer_hpp
#define Tokenizer_hpp

#include <vector>
#include <string>

class Tokenizer {
public:
    static std::vector<std::string> s_Parse(const std::string& string, const std::string& sep);
};

#endif /* Tokenizer_hpp */
