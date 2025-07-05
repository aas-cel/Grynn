#pragma once
#include "../Command.hpp"
#include "../../notes/Note.hpp"
#include <memory>
#include <vector>

class MoveNoteCommand : public Command {
public:
    MoveNoteCommand(std::shared_ptr<Note> note, double oldX, double oldY, double newX, double newY);
    void execute() override;
    void undo() override;
private:
    std::shared_ptr<Note> note;
    double oldX, oldY, newX, newY;
    bool executed = false;
};
