#pragma once
#include <string>
#include <unordered_map>

class Settings {
public:
    void set(const std::string& key, const std::string& value);
    std::string get(const std::string& key) const;
private:
    std::unordered_map<std::string, std::string> settings;
};
