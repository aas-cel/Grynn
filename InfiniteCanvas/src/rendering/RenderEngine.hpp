#pragma once
#include <memory>
#include <StyleCPP/Painter.hpp>

class RenderEngine {
public:
    RenderEngine();
    ~RenderEngine();
    StyleCPP::Painter& painter();
private:
    std::unique_ptr<StyleCPP::Painter> painterPtr;
};
