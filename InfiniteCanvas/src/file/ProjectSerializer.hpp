#pragma once
#include <string>
#include <vector>
#include <memory>
#include "notes/Note.hpp"

class ProjectSerializer {
public:
    static bool serialize(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes);
    static bool deserialize(const std::string& path, std::vector<std::shared_ptr<Note>>& notes);
};
