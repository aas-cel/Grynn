#include "NoteManager.hpp"
#include <algorithm>

void NoteManager::addNote(std::shared_ptr<Note> note) {
    notes.push_back(note);
}

void NoteManager::removeNote(std::shared_ptr<Note> note) {
    notes.erase(std::remove(notes.begin(), notes.end(), note), notes.end());
}

const std::vector<std::shared_ptr<Note>>& NoteManager::getNotes() const {
    return notes;
}
