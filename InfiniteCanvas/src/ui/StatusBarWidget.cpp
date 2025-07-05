#include "StatusBarWidget.hpp"

StatusBarWidget::StatusBarWidget(StyleCPP::Widget* parent) : StyleCPP::StatusBar(parent) {}
void StatusBarWidget::setStatus(const std::string& text) {
    setText(text);
}
