#include "PanTool.hpp"
#include "../ui/CanvasWidget.hpp"
#include "../canvas/Viewport.hpp"

PanTool::PanTool(CanvasWidget* canvas) : Tool(canvas) {}

void PanTool::onMousePress(double x, double y, int button) {
    if (button == 1) {
        panning = true;
        lastX = x;
        lastY = y;
    }
}

void PanTool::onMouseMove(double x, double y, int button) {
    if (panning && button == 1) {
        double dx = x - lastX;
        double dy = y - lastY;
        canvas->viewport.pan(-dx, -dy);
        lastX = x;
        lastY = y;
        canvas->update();
    }
}

void PanTool::onMouseRelease(double x, double y, int button) {
    if (panning && button == 1) {
        panning = false;
    }
}
