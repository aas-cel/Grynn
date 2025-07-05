#include "UndoRedoManager.hpp"

void UndoRedoManager::execute(std::unique_ptr<Command> cmd) {
    cmd->execute();
    undoStack.push_back(std::move(cmd));
    redoStack.clear();
}
void UndoRedoManager::undo() {
    if (!undoStack.empty()) {
        auto cmd = std::move(undoStack.back());
        undoStack.pop_back();
        cmd->undo();
        redoStack.push_back(std::move(cmd));
    }
}
void UndoRedoManager::redo() {
    if (!redoStack.empty()) {
        auto cmd = std::move(redoStack.back());
        redoStack.pop_back();
        cmd->execute();
        undoStack.push_back(std::move(cmd));
    }
}
