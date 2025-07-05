#pragma once
#include <StyleCPP/Widget.hpp>
#include "canvas/InfiniteCanvas.hpp"
#include "canvas/Viewport.hpp"
#include "canvas/CanvasRenderer.hpp"

class CanvasWidget : public StyleCPP::Widget {
public:
    CanvasWidget(StyleCPP::Widget* parent = nullptr);
    ~CanvasWidget() override;
    void paintEvent(StyleCPP::PaintEvent* event) override;
    void mousePressEvent(StyleCPP::MouseEvent* event) override;
    void mouseMoveEvent(StyleCPP::MouseEvent* event) override;
    void wheelEvent(StyleCPP::WheelEvent* event) override;
private:
    InfiniteCanvas canvas;
    Viewport viewport;
    CanvasRenderer renderer;
    bool panning = false;
    double lastMouseX = 0, lastMouseY = 0;
};
