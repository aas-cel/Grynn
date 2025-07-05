#pragma once
#include <StyleCPP/Widget.hpp>
#include "../canvas/Viewport.hpp"

class MiniMapWidget : public StyleCPP::Widget {
public:
    MiniMapWidget(StyleCPP::Widget* parent = nullptr);
    void setViewport(const Viewport& viewport);
    void paintEvent(StyleCPP::PaintEvent* event) override;
private:
    Viewport viewport;
};
