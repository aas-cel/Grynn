#include <cassert>
#include "../../src/canvas/QuadTree.hpp"
#include "../../src/notes/TextNote.hpp"

void test_quadtree_insert_query() {
    QuadTree qt;
    auto note = std::make_shared<TextNote>("N", 5, 5);
    qt.insert(note);
    auto found = qt.query({0,0,10,10});
    assert(!found.empty());
}

int main() {
    test_quadtree_insert_query();
    return 0;
}
