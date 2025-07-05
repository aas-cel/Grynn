#include "InfiniteCanvas.hpp"
#include "canvas/CanvasRenderer.hpp"
#include "canvas/Viewport.hpp"
#include "canvas/QuadTree.hpp"
#include "notes/Note.hpp"

InfiniteCanvas::InfiniteCanvas() : spatialIndex(std::make_unique<QuadTree>()) {}
InfiniteCanvas::~InfiniteCanvas() = default;

void InfiniteCanvas::addNote(std::shared_ptr<Note> note) {
    notes.push_back(note);
    spatialIndex->insert(note);
}

void InfiniteCanvas::removeNote(std::shared_ptr<Note> note) {
    spatialIndex->remove(note);
    notes.erase(std::remove(notes.begin(), notes.end(), note), notes.end());
}

void InfiniteCanvas::moveNote(std::shared_ptr<Note> note, double x, double y) {
    spatialIndex->move(note, x, y);
    note->setPosition(x, y);
}

void InfiniteCanvas::render(CanvasRenderer& renderer, const Viewport& viewport) {
    auto visibleNotes = getNotesInView(viewport);
    for (const auto& note : visibleNotes) {
        note->render(renderer, viewport);
    }
}

std::vector<std::shared_ptr<Note>> InfiniteCanvas::getNotesInView(const Viewport& viewport) const {
    return spatialIndex->query(viewport.getBounds());
}
