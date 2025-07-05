#include "FileManager.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

FileManager::FileManager() {}
FileManager::~FileManager() {}

bool FileManager::saveProject(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes) {
    std::ofstream ofs(path, std::ios::binary);
    if (!ofs) return false;
    for (const auto& note : notes) {
        ofs << note->getType() << "\t" << note->getPosition()[0] << "\t" << note->getPosition()[1] << "\t";
        if (note->getType() == "TextNote") {
            ofs << static_cast<const TextNote*>(note.get())->getText();
        }
        ofs << "\n";
    }
    return true;
}

bool FileManager::loadProject(const std::string& path, std::vector<std::shared_ptr<Note>>& notes) {
    std::ifstream ifs(path, std::ios::binary);
    if (!ifs) return false;
    notes.clear();
    std::string line;
    while (std::getline(ifs, line)) {
        std::istringstream iss(line);
        std::string type;
        double x, y;
        iss >> type >> x >> y;
        if (type == "TextNote") {
            std::string text;
            std::getline(iss, text);
            notes.push_back(std::make_shared<TextNote>(text, x, y));
        }
    }
    return true;
}

bool FileManager::exportToPNG(const std::string& path) {
    // TODO: Integrate with StyleCPP or Cairo for PNG export
    return false;
}

bool FileManager::exportToPDF(const std::string& path) {
    // TODO: Integrate with StyleCPP or Cairo for PDF export
    return false;
}

bool FileManager::exportToMarkdown(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes) {
    std::ofstream ofs(path);
    if (!ofs) return false;
    for (const auto& note : notes) {
        if (note->getType() == "TextNote") {
            ofs << "- " << static_cast<const TextNote*>(note.get())->getText() << "\n";
        }
    }
    return true;
}

bool FileManager::exportToTXT(const std::string& path, const std::vector<std::shared_ptr<Note>>& notes) {
    std::ofstream ofs(path);
    if (!ofs) return false;
    for (const auto& note : notes) {
        if (note->getType() == "TextNote") {
            ofs << static_cast<const TextNote*>(note.get())->getText() << "\n";
        }
    }
    return true;
}
