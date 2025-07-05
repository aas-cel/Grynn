#pragma once
#include "Tool.hpp"

class SelectionTool : public Tool {
public:
    SelectionTool(CanvasWidget* canvas);
    std::string name() const override { return "SelectionTool"; }
    void onMousePress(double x, double y, int button) override;
    void onMouseMove(double x, double y, int button) override;
    void onMouseRelease(double x, double y, int button) override;
private:
    bool selecting = false;
    double startX = 0, startY = 0;
};
