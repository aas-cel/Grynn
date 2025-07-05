#pragma once
#include <vector>
#include <memory>
#include "../notes/Note.hpp"

class SearchResults {
public:
    void setResults(const std::vector<std::shared_ptr<Note>>& notes);
    const std::vector<std::shared_ptr<Note>>& getResults() const;
private:
    std::vector<std::shared_ptr<Note>> results;
};
