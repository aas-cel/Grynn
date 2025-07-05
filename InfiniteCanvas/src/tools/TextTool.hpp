#pragma once
#include "Tool.hpp"
#include <string>

class TextTool : public Tool {
public:
    TextTool(CanvasWidget* canvas);
    std::string name() const override { return "TextTool"; }
    void onMousePress(double x, double y, int button) override;
    void onMouseMove(double x, double y, int button) override;
    void onMouseRelease(double x, double y, int button) override;
private:
    bool creating = false;
    double startX = 0, startY = 0;
};
