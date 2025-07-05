#pragma once
#include <string>
#include <vector>
#include <memory>
#include "../notes/Note.hpp"

class SearchEngine {
public:
    SearchEngine();
    ~SearchEngine();
    std::vector<std::shared_ptr<Note>> search(const std::vector<std::shared_ptr<Note>>& notes, const std::string& query) const;
};
