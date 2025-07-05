#pragma once
#include "../Command.hpp"
#include "../../notes/Note.hpp"
#include <memory>
#include <vector>

class DeleteNoteCommand : public Command {
public:
    DeleteNoteCommand(std::vector<std::shared_ptr<Note>>& notes, std::shared_ptr<Note> note);
    void execute() override;
    void undo() override;
private:
    std::vector<std::shared_ptr<Note>>& notes;
    std::shared_ptr<Note> note;
    bool executed = false;
};
