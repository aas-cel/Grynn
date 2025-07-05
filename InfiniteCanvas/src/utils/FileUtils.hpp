#pragma once
#include <string>
#include <vector>
#include <fstream>

namespace FileUtils {
    inline bool exists(const std::string& path) {
        std::ifstream f(path);
        return f.good();
    }
    inline std::vector<char> readAll(const std::string& path) {
        std::ifstream f(path, std::ios::binary);
        return std::vector<char>((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    }
}
