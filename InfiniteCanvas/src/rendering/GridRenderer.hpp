#pragma once
#include <StyleCPP/Painter.hpp>
#include "../canvas/Viewport.hpp"

class GridRenderer {
public:
    GridRenderer();
    void drawGrid(StyleCPP::Painter& painter, const Viewport& viewport, double gridSize = 64.0);
};
