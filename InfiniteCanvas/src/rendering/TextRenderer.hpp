#pragma once
#include <string>
#include <StyleCPP/Painter.hpp>
#include "FontManager.hpp"

class TextRenderer {
public:
    TextRenderer(FontManager& fm);
    void drawText(StyleCPP::Painter& painter, const std::string& text, double x, double y, const std::string& font, int size, const std::string& color);
private:
    FontManager& fontManager;
};
