#include "QuadTree.hpp"
#include "notes/Note.hpp"
#include <algorithm>

struct QuadTree::Node {
    double x, y, w, h;
    int depth;
    std::vector<std::shared_ptr<Note>> notes;
    std::array<std::unique_ptr<Node>, 4> children;
    Node(double x, double y, double w, double h, int depth)
        : x(x), y(y), w(w), h(h), depth(depth) {}
};

QuadTree::QuadTree(double x, double y, double w, double h, int depth)
    : root(std::make_unique<Node>(x, y, w, h, depth)) {}
QuadTree::~QuadTree() = default;

void QuadTree::insert(std::shared_ptr<Note> note) {
    // Real implementation would recursively insert into children if needed
    root->notes.push_back(note);
}

void QuadTree::remove(std::shared_ptr<Note> note) {
    auto& notes = root->notes;
    notes.erase(std::remove(notes.begin(), notes.end(), note), notes.end());
}

void QuadTree::move(std::shared_ptr<Note> note, double x, double y) {
    // For now, just remove and re-insert
    remove(note);
    note->setPosition(x, y);
    insert(note);
}

std::vector<std::shared_ptr<Note>> QuadTree::query(const std::array<double, 4>& bounds) const {
    // Real implementation would check bounds, here we return all for simplicity
    return root->notes;
}
