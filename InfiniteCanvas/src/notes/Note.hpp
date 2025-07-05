#pragma once
#include <memory>
#include <string>
#include <array>
class CanvasRenderer;
class Viewport;

class Note {
public:
    virtual ~Note() = default;
    virtual void render(CanvasRenderer& renderer, const Viewport& viewport) = 0;
    virtual void setPosition(double x, double y) = 0;
    virtual std::array<double, 2> getPosition() const = 0;
    virtual std::string getType() const = 0;
};
