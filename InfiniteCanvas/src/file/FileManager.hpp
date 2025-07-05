#pragma once
#include <string>
#include <vector>
#include <memory>
#include "notes/Note.hpp"

class FileManager {
public:
    FileManager();
    ~FileManager();
    bool saveProject(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes);
    bool loadProject(const std::string& path, std::vector<std::shared_ptr<Note>>& notes);
    bool exportToPNG(const std::string& path);
    bool exportToPDF(const std::string& path);
    bool exportToMarkdown(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes);
    bool exportToTXT(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes);
};
