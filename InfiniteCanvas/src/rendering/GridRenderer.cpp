#include "GridRenderer.hpp"

GridRenderer::GridRenderer() {}

void GridRenderer::drawGrid(StyleCPP::Painter& painter, const Viewport& viewport, double gridSize) {
    double left = viewport.getX();
    double top = viewport.getY();
    double right = left + viewport.getWidth();
    double bottom = top + viewport.getHeight();
    painter.setColor("#e0e0e0");
    for (double x = left - fmod(left, gridSize); x < right; x += gridSize) {
        painter.drawLine((x - left) * viewport.getZoom(), 0, (x - left) * viewport.getZoom(), viewport.getHeight() * viewport.getZoom());
    }
    for (double y = top - fmod(top, gridSize); y < bottom; y += gridSize) {
        painter.drawLine(0, (y - top) * viewport.getZoom(), viewport.getWidth() * viewport.getZoom(), (y - top) * viewport.getZoom());
    }
}
