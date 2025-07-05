#include "RecentFiles.hpp"
#include <algorithm>

void RecentFiles::addFile(const std::string& path) {
    files.erase(std::remove(files.begin(), files.end(), path), files.end());
    files.insert(files.begin(), path);
    if (files.size() > 10) files.pop_back();
}

const std::vector<std::string>& RecentFiles::getFiles() const {
    return files;
}
