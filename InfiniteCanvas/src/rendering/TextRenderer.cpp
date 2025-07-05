#include "TextRenderer.hpp"

TextRenderer::TextRenderer(FontManager& fm) : fontManager(fm) {}

void TextRenderer::drawText(StyleCPP::Painter& painter, const std::string& text, double x, double y, const std::string& font, int size, const std::string& color) {
    auto f = fontManager.getFont(font, size);
    painter.setFont(*f);
    painter.setColor(color);
    painter.drawText(x, y, text);
}
