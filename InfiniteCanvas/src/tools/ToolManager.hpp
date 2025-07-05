#pragma once
#include <memory>
#include <vector>
#include <string>
#include "Tool.hpp"

class ToolManager {
public:
    ToolManager(CanvasWidget* canvas);
    void setActiveTool(const std::string& name);
    Tool* getActiveTool() const;
private:
    std::vector<std::unique_ptr<Tool>> tools;
    Tool* activeTool = nullptr;
};
