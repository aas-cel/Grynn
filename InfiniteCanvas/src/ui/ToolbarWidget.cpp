#include "ToolbarWidget.hpp"

ToolbarWidget::ToolbarWidget(StyleCPP::Widget* parent) : StyleCPP::Toolbar(parent) {}
void ToolbarWidget::addToolAction(const std::string& name) {
    addAction(name);
}
