#pragma once
#include <memory>
class Note;
class CanvasRenderer;
class Viewport;

class NoteRenderer {
public:
    static void render(const std::shared_ptr<Note>& note, CanvasRenderer& renderer, const Viewport& viewport);
};
