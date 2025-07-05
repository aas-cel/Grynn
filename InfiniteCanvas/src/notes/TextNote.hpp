#pragma once
#include "Note.hpp"
#include <string>

class TextNote : public Note {
public:
    TextNote(const std::string& text, double x, double y);
    void render(CanvasRenderer& renderer, const Viewport& viewport) override;
    void setPosition(double x, double y) override;
    std::array<double, 2> getPosition() const override;
    std::string getType() const override { return "TextNote"; }
    void setText(const std::string& text);
    const std::string& getText() const;
private:
    std::string text;
    double posX, posY;
};
