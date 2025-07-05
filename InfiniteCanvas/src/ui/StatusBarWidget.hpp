#pragma once
#include <StyleCPP/StatusBar.hpp>
#include <string>

class StatusBarWidget : public StyleCPP::StatusBar {
public:
    StatusBarWidget(StyleCPP::Widget* parent = nullptr);
    void setStatus(const std::string& text);
};
