#include "FontManager.hpp"

FontManager::FontManager() {}
FontManager::~FontManager() {}

std::shared_ptr<StyleCPP::Font> FontManager::getFont(const std::string& name, int size) {
    std::string key = name + std::to_string(size);
    auto it = fonts.find(key);
    if (it != fonts.end()) return it->second;
    auto font = std::make_shared<StyleCPP::Font>(name, size);
    fonts[key] = font;
    return font;
}
