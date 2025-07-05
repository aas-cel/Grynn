#pragma once
#include <StyleCPP/Painter.hpp>

class ShapeRenderer {
public:
    ShapeRenderer();
    void drawRect(StyleCPP::Painter& painter, double x, double y, double w, double h, const std::string& color);
    void drawEllipse(StyleCPP::Painter& painter, double x, double y, double rx, double ry, const std::string& color);
    void drawLine(StyleCPP::Painter& painter, double x1, double y1, double x2, double y2, const std::string& color);
};
