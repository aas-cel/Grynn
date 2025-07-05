#include "MoveNoteCommand.hpp"

MoveNoteCommand::MoveNoteCommand(std::shared_ptr<Note> note, double oldX, double oldY, double newX, double newY)
    : note(note), oldX(oldX), oldY(oldY), newX(newX), newY(newY) {}
void MoveNoteCommand::execute() {
    if (!executed) {
        note->setPosition(newX, newY);
        executed = true;
    }
}
void MoveNoteCommand::undo() {
    if (executed) {
        note->setPosition(oldX, oldY);
        executed = false;
    }
}
