#include "InputManager.hpp"
#include "../ui/CanvasWidget.hpp"

InputManager::InputManager(CanvasWidget* canvas) : toolManager(canvas) {}

void InputManager::handleMousePress(double x, double y, int button) {
    toolManager.getActiveTool()->onMousePress(x, y, button);
}
void InputManager::handleMouseMove(double x, double y, int button) {
    toolManager.getActiveTool()->onMouseMove(x, y, button);
}
void InputManager::handleMouseRelease(double x, double y, int button) {
    toolManager.getActiveTool()->onMouseRelease(x, y, button);
}
ToolManager& InputManager::getToolManager() { return toolManager; }
