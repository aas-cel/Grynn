#include "RenderEngine.hpp"

RenderEngine::RenderEngine() : painterPtr(std::make_unique<StyleCPP::Painter>()) {}
RenderEngine::~RenderEngine() = default;

StyleCPP::Painter& RenderEngine::painter() {
    return *painterPtr;
}
