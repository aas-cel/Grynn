#include "ToolManager.hpp"
#include "TextTool.hpp"
#include "SelectionTool.hpp"
#include "PanTool.hpp"
#include "../ui/CanvasWidget.hpp"

ToolManager::ToolManager(CanvasWidget* canvas) {
    tools.emplace_back(std::make_unique<TextTool>(canvas));
    tools.emplace_back(std::make_unique<SelectionTool>(canvas));
    tools.emplace_back(std::make_unique<PanTool>(canvas));
    activeTool = tools.front().get();
}

void ToolManager::setActiveTool(const std::string& name) {
    for (auto& tool : tools) {
        if (tool->name() == name) {
            activeTool = tool.get();
            break;
        }
    }
}

Tool* ToolManager::getActiveTool() const {
    return activeTool;
}
