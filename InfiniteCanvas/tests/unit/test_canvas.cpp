#include <cassert>
#include "../../src/canvas/InfiniteCanvas.hpp"

void test_canvas_add_note() {
    InfiniteCanvas canvas;
    auto note = std::make_shared<TextNote>("Test", 10, 20);
    canvas.addNote(note);
    auto notes = canvas.getNotesInView(Viewport(0,0,100,100,1.0));
    assert(!notes.empty());
}

int main() {
    test_canvas_add_note();
    return 0;
}
