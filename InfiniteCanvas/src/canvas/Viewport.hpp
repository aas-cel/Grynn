#pragma once
#include <array>

class Viewport {
public:
    Viewport(double x = 0, double y = 0, double w = 1200, double h = 800, double zoom = 1.0);
    void pan(double dx, double dy);
    void zoomAt(double factor, double cx, double cy);
    std::array<double, 4> getBounds() const;
    double getZoom() const;
    double getX() const;
    double getY() const;
    double getWidth() const;
    double getHeight() const;
private:
    double x, y, width, height, zoom;
};
