#include "CanvasRenderer.hpp"
#include "canvas/Viewport.hpp"
#include <StyleCPP/Painter.hpp>

CanvasRenderer::CanvasRenderer() {}
CanvasRenderer::~CanvasRenderer() {}

void CanvasRenderer::drawText(const std::string& text, double x, double y, const Viewport& viewport) {
    StyleCPP::Painter painter;
    double vx = (x - viewport.getX()) * viewport.getZoom();
    double vy = (y - viewport.getY()) * viewport.getZoom();
    painter.drawText(vx, vy, text);
}
