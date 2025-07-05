#pragma once
#include <string>
#include <unordered_map>

class StateManager {
public:
    void setState(const std::string& key, int value);
    int getState(const std::string& key) const;
private:
    std::unordered_map<std::string, int> state;
};
