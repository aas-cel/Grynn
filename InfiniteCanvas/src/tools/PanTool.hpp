#pragma once
#include "Tool.hpp"

class PanTool : public Tool {
public:
    PanTool(CanvasWidget* canvas);
    std::string name() const override { return "PanTool"; }
    void onMousePress(double x, double y, int button) override;
    void onMouseMove(double x, double y, int button) override;
    void onMouseRelease(double x, double y, int button) override;
private:
    bool panning = false;
    double lastX = 0, lastY = 0;
};
