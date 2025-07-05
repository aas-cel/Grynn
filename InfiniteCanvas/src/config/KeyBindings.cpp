#include "KeyBindings.hpp"

void KeyBindings::set(const std::string& action, const std::string& key) {
    bindings[action] = key;
}
std::string KeyBindings::get(const std::string& action) const {
    auto it = bindings.find(action);
    if (it != bindings.end()) return it->second;
    return {};
}
