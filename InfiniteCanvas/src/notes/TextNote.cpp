#include "TextNote.hpp"
#include "canvas/CanvasRenderer.hpp"
#include "canvas/Viewport.hpp"

TextNote::TextNote(const std::string& text, double x, double y)
    : text(text), posX(x), posY(y) {}

void TextNote::render(CanvasRenderer& renderer, const Viewport& viewport) {
    renderer.drawText(text, posX, posY, viewport);
}

void TextNote::setPosition(double x, double y) {
    posX = x;
    posY = y;
}

std::array<double, 2> TextNote::getPosition() const {
    return {posX, posY};
}

void TextNote::setText(const std::string& t) {
    text = t;
}

const std::string& TextNote::getText() const {
    return text;
}
