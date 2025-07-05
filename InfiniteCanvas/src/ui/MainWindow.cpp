#include "MainWindow.hpp"
#include "CanvasWidget.hpp"
#include <StyleCPP/Toolbar.hpp>
#include <StyleCPP/Label.hpp>

MainWindow::MainWindow() : StyleCPP::Window("Infinite Canvas") {
    setMinimumSize(1200, 800);
    auto* toolbar = new StyleCPP::Toolbar(this);
    toolbar->addAction("New");
    toolbar->addAction("Open");
    toolbar->addAction("Save");
    toolbar->addAction("Export");
    setToolbar(toolbar);
    auto* canvas = new CanvasWidget(this);
    setCentralWidget(canvas);
}
