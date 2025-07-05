#pragma once
#include <string>
#include <vector>
#include <memory>
#include "notes/Note.hpp"

class ExportManager {
public:
    static bool exportPNG(const std::string& path);
    static bool exportPDF(const std::string& path);
    static bool exportMarkdown(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes);
    static bool exportTXT(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes);
};
