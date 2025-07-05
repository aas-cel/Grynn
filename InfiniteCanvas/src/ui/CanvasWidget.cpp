#include "CanvasWidget.hpp"
#include <StyleCPP/PaintEvent.hpp>
#include <StyleCPP/MouseEvent.hpp>
#include <StyleCPP/WheelEvent.hpp>

CanvasWidget::CanvasWidget(StyleCPP::Widget* parent)
    : StyleCPP::Widget(parent), viewport(0, 0, 1200, 800, 1.0) {
    setFocusPolicy(StyleCPP::FocusPolicy::StrongFocus);
}

CanvasWidget::~CanvasWidget() = default;

void CanvasWidget::paintEvent(StyleCPP::PaintEvent* event) {
    (void)event;
    canvas.render(renderer, viewport);
}

void CanvasWidget::mousePressEvent(StyleCPP::MouseEvent* event) {
    if (event->button() == StyleCPP::MouseButton::Left) {
        panning = true;
        lastMouseX = event->x();
        lastMouseY = event->y();
    }
}

void CanvasWidget::mouseMoveEvent(StyleCPP::MouseEvent* event) {
    if (panning) {
        double dx = event->x() - lastMouseX;
        double dy = event->y() - lastMouseY;
        viewport.pan(-dx, -dy);
        lastMouseX = event->x();
        lastMouseY = event->y();
        update();
    }
}

void CanvasWidget::wheelEvent(StyleCPP::WheelEvent* event) {
    double factor = (event->delta() > 0) ? 1.1 : 0.9;
    viewport.zoomAt(factor, event->x(), event->y());
    update();
}
