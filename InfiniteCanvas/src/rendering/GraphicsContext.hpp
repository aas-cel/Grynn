#pragma once
#include <StyleCPP/Painter.hpp>

class GraphicsContext {
public:
    GraphicsContext(StyleCPP::Painter& painter);
    StyleCPP::Painter& painter;
};
