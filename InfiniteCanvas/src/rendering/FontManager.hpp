#pragma once
#include <string>
#include <unordered_map>
#include <memory>
#include <StyleCPP/Font.hpp>

class FontManager {
public:
    FontManager();
    ~FontManager();
    std::shared_ptr<StyleCPP::Font> getFont(const std::string& name, int size);
private:
    std::unordered_map<std::string, std::shared_ptr<StyleCPP::Font>> fonts;
};
