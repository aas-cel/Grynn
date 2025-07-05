#pragma once
#include "../Command.hpp"
#include "../../notes/Note.hpp"
#include <memory>
#include <string>

class EditNoteCommand : public Command {
public:
    EditNoteCommand(std::shared_ptr<Note> note, const std::string& oldText, const std::string& newText);
    void execute() override;
    void undo() override;
private:
    std::shared_ptr<Note> note;
    std::string oldText, newText;
    bool executed = false;
};
