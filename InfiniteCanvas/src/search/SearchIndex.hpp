#pragma once
#include <unordered_map>
#include <string>
#include <vector>
#include <memory>
#include "../notes/Note.hpp"

class SearchIndex {
public:
    void index(const std::vector<std::shared_ptr<Note>>& notes);
    std::vector<std::shared_ptr<Note>> query(const std::string& term) const;
private:
    std::unordered_map<std::string, std::vector<std::shared_ptr<Note>>> indexMap;
};
