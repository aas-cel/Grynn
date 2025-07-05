#include "MiniMapWidget.hpp"
#include <StyleCPP/PaintEvent.hpp>

MiniMapWidget::MiniMapWidget(StyleCPP::Widget* parent) : StyleCPP::Widget(parent) {}
void MiniMapWidget::setViewport(const Viewport& vp) { viewport = vp; update(); }
void MiniMapWidget::paintEvent(StyleCPP::PaintEvent* event) {
    (void)event;
    // TODO: Draw minimap based on viewport
}
