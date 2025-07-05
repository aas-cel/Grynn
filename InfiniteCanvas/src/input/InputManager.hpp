#pragma once
#include <memory>
#include "../tools/ToolManager.hpp"

class InputManager {
public:
    InputManager(CanvasWidget* canvas);
    void handleMousePress(double x, double y, int button);
    void handleMouseMove(double x, double y, int button);
    void handleMouseRelease(double x, double y, int button);
    ToolManager& getToolManager();
private:
    ToolManager toolManager;
};
