#include "Viewport.hpp"

Viewport::Viewport(double x, double y, double w, double h, double zoom)
    : x(x), y(y), width(w), height(h), zoom(zoom) {}

void Viewport::pan(double dx, double dy) {
    x += dx / zoom;
    y += dy / zoom;
}

void Viewport::zoomAt(double factor, double cx, double cy) {
    double oldZoom = zoom;
    zoom *= factor;
    x = cx - (cx - x) * (oldZoom / zoom);
    y = cy - (cy - y) * (oldZoom / zoom);
}

std::array<double, 4> Viewport::getBounds() const {
    return {x, y, width / zoom, height / zoom};
}

double Viewport::getZoom() const { return zoom; }
double Viewport::getX() const { return x; }
double Viewport::getY() const { return y; }
double Viewport::getWidth() const { return width; }
double Viewport::getHeight() const { return height; }
