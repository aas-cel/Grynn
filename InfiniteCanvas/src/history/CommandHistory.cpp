#include "CommandHistory.hpp"

void CommandHistory::add(std::unique_ptr<Command> cmd) {
    history.push_back(std::move(cmd));
}
const std::vector<std::unique_ptr<Command>>& CommandHistory::getHistory() const {
    return history;
}
