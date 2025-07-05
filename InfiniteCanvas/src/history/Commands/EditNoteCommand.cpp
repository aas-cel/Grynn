#include "EditNoteCommand.hpp"
#include "../../notes/TextNote.hpp"

EditNoteCommand::EditNoteCommand(std::shared_ptr<Note> note, const std::string& oldText, const std::string& newText)
    : note(note), oldText(oldText), newText(newText) {}
void EditNoteCommand::execute() {
    if (!executed && note->getType() == "TextNote") {
        static_cast<TextNote*>(note.get())->setText(newText);
        executed = true;
    }
}
void EditNoteCommand::undo() {
    if (executed && note->getType() == "TextNote") {
        static_cast<TextNote*>(note.get())->setText(oldText);
        executed = false;
    }
}
