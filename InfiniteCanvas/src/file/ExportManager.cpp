#include "ExportManager.hpp"
#include <fstream>
#include "notes/TextNote.hpp"

bool ExportManager::exportPNG(const std::string& path) {
    // TODO: Integrate with StyleCPP or Cairo for PNG export
    return false;
}

bool ExportManager::exportPDF(const std::string& path) {
    // TODO: Integrate with StyleCPP or Cairo for PDF export
    return false;
}

bool ExportManager::exportMarkdown(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes) {
    std::ofstream ofs(path);
    if (!ofs) return false;
    for (const auto& note : notes) {
        if (note->getType() == "TextNote") {
            ofs << "- " << static_cast<const TextNote*>(note.get())->getText() << "\n";
        }
    }
    return true;
}

bool ExportManager::exportTXT(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes) {
    std::ofstream ofs(path);
    if (!ofs) return false;
    for (const auto& note : notes) {
        if (note->getType() == "TextNote") {
            ofs << static_cast<const TextNote*>(note.get())->getText() << "\n";
        }
    }
    return true;
}
