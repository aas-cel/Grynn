#pragma once
#include <vector>
#include <memory>
#include "Command.hpp"

class UndoRedoManager {
public:
    void execute(std::unique_ptr<Command> cmd);
    void undo();
    void redo();
private:
    std::vector<std::unique_ptr<Command>> undoStack;
    std::vector<std::unique_ptr<Command>> redoStack;
};
