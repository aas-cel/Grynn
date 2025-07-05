#pragma once
#include <vector>
#include <memory>
#include "Note.hpp"

class NoteManager {
public:
    void addNote(std::shared_ptr<Note> note);
    void removeNote(std::shared_ptr<Note> note);
    const std::vector<std::shared_ptr<Note>>& getNotes() const;
private:
    std::vector<std::shared_ptr<Note>> notes;
};
