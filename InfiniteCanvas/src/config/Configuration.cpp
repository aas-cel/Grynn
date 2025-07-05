#include "Configuration.hpp"

void Configuration::set(const std::string& key, const std::string& value) {
    config[key] = value;
}
std::string Configuration::get(const std::string& key) const {
    auto it = config.find(key);
    if (it != config.end()) return it->second;
    return {};
}
