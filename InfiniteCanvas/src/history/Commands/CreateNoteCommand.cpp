#include "CreateNoteCommand.hpp"

CreateNoteCommand::CreateNoteCommand(std::vector<std::shared_ptr<Note>>& notes, std::shared_ptr<Note> note)
    : notes(notes), note(note) {}
void CreateNoteCommand::execute() {
    if (!executed) {
        notes.push_back(note);
        executed = true;
    }
}
void CreateNoteCommand::undo() {
    if (executed) {
        notes.erase(std::remove(notes.begin(), notes.end(), note), notes.end());
        executed = false;
    }
}
