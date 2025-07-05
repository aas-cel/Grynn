#pragma once
#include <string>
#include <StyleCPP/FileDialog.hpp>

namespace FileDialogs {
    std::string getOpenFileName(const std::string& filter);
    std::string getSaveFileName(const std::string& filter);
}
