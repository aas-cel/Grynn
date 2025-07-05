#pragma once
#include "../Command.hpp"
#include "../../notes/Note.hpp"
#include <memory>
#include <vector>

class CreateNoteCommand : public Command {
public:
    CreateNoteCommand(std::vector<std::shared_ptr<Note>>& notes, std::shared_ptr<Note> note);
    void execute() override;
    void undo() override;
private:
    std::vector<std::shared_ptr<Note>>& notes;
    std::shared_ptr<Note> note;
    bool executed = false;
};
