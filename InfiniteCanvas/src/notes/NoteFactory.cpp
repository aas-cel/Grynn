#include "NoteFactory.hpp"
#include "TextNote.hpp"

std::shared_ptr<Note> NoteFactory::createTextNote(const std::string& text, double x, double y) {
    return std::make_shared<TextNote>(text, x, y);
}
