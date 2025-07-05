#pragma once
#include <string>
#include <vector>
#include <memory>
#include "notes/Note.hpp"

class BackupManager {
public:
    static bool createBackup(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes);
    static bool restoreBackup(const std::string& path, std::vector<std::shared_ptr<Note>>& notes);
};
