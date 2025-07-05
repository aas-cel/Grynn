#include "FileDialogs.hpp"

std::string FileDialogs::getOpenFileName(const std::string& filter) {
    return StyleCPP::FileDialog::getOpenFileName(nullptr, "Open File", "", filter);
}
std::string FileDialogs::getSaveFileName(const std::string& filter) {
    return StyleCPP::FileDialog::getSaveFileName(nullptr, "Save File", "", filter);
}
