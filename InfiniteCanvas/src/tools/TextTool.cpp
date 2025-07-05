#include "TextTool.hpp"
#include "../ui/CanvasWidget.hpp"
#include "../notes/NoteFactory.hpp"

TextTool::TextTool(CanvasWidget* canvas) : Tool(canvas) {}

void TextTool::onMousePress(double x, double y, int button) {
    if (button == 1) { // Left click
        creating = true;
        startX = x;
        startY = y;
    }
}

void TextTool::onMouseMove(double x, double y, int button) {
    (void)x; (void)y; (void)button;
    // No-op for text tool
}

void TextTool::onMouseRelease(double x, double y, int button) {
    if (creating && button == 1) {
        creating = false;
        // For demo, create a note with default text
        auto note = NoteFactory::createTextNote("New Note", x, y);
        canvas->addNote(note);
    }
}
