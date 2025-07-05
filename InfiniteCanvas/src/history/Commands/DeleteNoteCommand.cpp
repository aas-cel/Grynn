#include "DeleteNoteCommand.hpp"

DeleteNoteCommand::DeleteNoteCommand(std::vector<std::shared_ptr<Note>>& notes, std::shared_ptr<Note> note)
    : notes(notes), note(note) {}
void DeleteNoteCommand::execute() {
    if (!executed) {
        notes.erase(std::remove(notes.begin(), notes.end(), note), notes.end());
        executed = true;
    }
}
void DeleteNoteCommand::undo() {
    if (executed) {
        notes.push_back(note);
        executed = false;
    }
}
