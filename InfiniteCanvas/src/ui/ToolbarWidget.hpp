#pragma once
#include <StyleCPP/Toolbar.hpp>
#include <string>

class ToolbarWidget : public StyleCPP::Toolbar {
public:
    ToolbarWidget(StyleCPP::Widget* parent = nullptr);
    void addToolAction(const std::string& name);
};
