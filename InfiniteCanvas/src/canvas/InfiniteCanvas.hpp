#pragma once
#include "canvas/Viewport.hpp"
#include "canvas/QuadTree.hpp"
#include "notes/Note.hpp"
#include <vector>
#include <memory>

class InfiniteCanvas {
public:
    InfiniteCanvas();
    ~InfiniteCanvas();

    void addNote(std::shared_ptr<Note> note);
    void removeNote(std::shared_ptr<Note> note);
    void moveNote(std::shared_ptr<Note> note, double x, double y);
    void render(class CanvasRenderer& renderer, const Viewport& viewport);
    std::vector<std::shared_ptr<Note>> getNotesInView(const Viewport& viewport) const;

private:
    std::unique_ptr<QuadTree> spatialIndex;
    std::vector<std::shared_ptr<Note>> notes;
};
