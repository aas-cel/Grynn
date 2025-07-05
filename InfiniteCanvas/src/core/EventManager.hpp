#pragma once
#include <functional>
#include <unordered_map>
#include <vector>
#include <string>

class EventManager {
public:
    using Callback = std::function<void()>;
    void subscribe(const std::string& event, Callback cb);
    void emit(const std::string& event);
private:
    std::unordered_map<std::string, std::vector<Callback>> listeners;
};
