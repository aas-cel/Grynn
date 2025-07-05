#include "ShapeRenderer.hpp"

ShapeRenderer::ShapeRenderer() {}

void ShapeRenderer::drawRect(StyleCPP::Painter& painter, double x, double y, double w, double h, const std::string& color) {
    painter.setColor(color);
    painter.drawRect(x, y, w, h);
}
void ShapeRenderer::drawEllipse(StyleCPP::Painter& painter, double x, double y, double rx, double ry, const std::string& color) {
    painter.setColor(color);
    painter.drawEllipse(x, y, rx, ry);
}
void ShapeRenderer::drawLine(StyleCPP::Painter& painter, double x1, double y1, double x2, double y2, const std::string& color) {
    painter.setColor(color);
    painter.drawLine(x1, y1, x2, y2);
}
