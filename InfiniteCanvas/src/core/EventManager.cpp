#include "EventManager.hpp"

void EventManager::subscribe(const std::string& event, Callback cb) {
    listeners[event].push_back(std::move(cb));
}

void EventManager::emit(const std::string& event) {
    auto it = listeners.find(event);
    if (it != listeners.end()) {
        for (auto& cb : it->second) {
            cb();
        }
    }
}
