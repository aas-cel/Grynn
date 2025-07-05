#pragma once
#include <memory>
#include <string>
#include "Note.hpp"

class NoteFactory {
public:
    static std::shared_ptr<Note> createTextNote(const std::string& text, double x, double y);
};
