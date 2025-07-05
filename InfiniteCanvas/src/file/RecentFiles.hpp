#pragma once
#include <vector>
#include <string>

class RecentFiles {
public:
    void addFile(const std::string& path);
    const std::vector<std::string>& getFiles() const;
private:
    std::vector<std::string> files;
};
