#pragma once
#include <string>
#include <unordered_map>

class KeyBindings {
public:
    void set(const std::string& action, const std::string& key);
    std::string get(const std::string& action) const;
private:
    std::unordered_map<std::string, std::string> bindings;
};
