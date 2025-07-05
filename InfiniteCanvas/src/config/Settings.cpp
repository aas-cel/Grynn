#include "Settings.hpp"

void Settings::set(const std::string& key, const std::string& value) {
    settings[key] = value;
}
std::string Settings::get(const std::string& key) const {
    auto it = settings.find(key);
    if (it != settings.end()) return it->second;
    return {};
}
