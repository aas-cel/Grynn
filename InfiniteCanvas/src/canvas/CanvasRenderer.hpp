#pragma once
#include <string>
#include <array>
class Viewport;

class CanvasRenderer {
public:
    CanvasRenderer();
    ~CanvasRenderer();
    void drawText(const std::string& text, double x, double y, const Viewport& viewport);
    // Drawing for shapes, images, etc. to be added
};
