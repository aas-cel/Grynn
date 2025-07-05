#pragma once
#include <vector>
#include <memory>
#include "Command.hpp"

class CommandHistory {
public:
    void add(std::unique_ptr<Command> cmd);
    const std::vector<std::unique_ptr<Command>>& getHistory() const;
private:
    std::vector<std::unique_ptr<Command>> history;
};
