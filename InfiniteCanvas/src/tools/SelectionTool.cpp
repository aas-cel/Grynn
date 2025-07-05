#include "SelectionTool.hpp"
#include "../ui/CanvasWidget.hpp"

SelectionTool::SelectionTool(CanvasWidget* canvas) : Tool(canvas) {}

void SelectionTool::onMousePress(double x, double y, int button) {
    if (button == 1) {
        selecting = true;
        startX = x;
        startY = y;
    }
}

void SelectionTool::onMouseMove(double x, double y, int button) {
    (void)x; (void)y; (void)button;
    // TODO: implement selection rectangle
}

void SelectionTool::onMouseRelease(double x, double y, int button) {
    if (selecting && button == 1) {
        selecting = false;
        // TODO: select notes in rectangle
    }
}
