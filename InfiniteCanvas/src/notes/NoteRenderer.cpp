#include "NoteRenderer.hpp"
#include "Note.hpp"
#include "canvas/CanvasRenderer.hpp"
#include "canvas/Viewport.hpp"

void NoteRenderer::render(const std::shared_ptr<Note>& note, CanvasRenderer& renderer, const Viewport& viewport) {
    note->render(renderer, viewport);
}
