#pragma once
#include <StyleCPP/Object.hpp>
#include <memory>
#include <string>
class CanvasWidget;
class Tool : public StyleCPP::Object {
public:
    Tool(CanvasWidget* canvas) : canvas(canvas) {}
    virtual ~Tool() = default;
    virtual std::string name() const = 0;
    virtual void onMousePress(double x, double y, int button) = 0;
    virtual void onMouseMove(double x, double y, int button) = 0;
    virtual void onMouseRelease(double x, double y, int button) = 0;
protected:
    CanvasWidget* canvas;
};
