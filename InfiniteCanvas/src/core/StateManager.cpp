#include "StateManager.hpp"

void StateManager::setState(const std::string& key, int value) {
    state[key] = value;
}

int StateManager::getState(const std::string& key) const {
    auto it = state.find(key);
    if (it != state.end()) return it->second;
    return 0;
}
