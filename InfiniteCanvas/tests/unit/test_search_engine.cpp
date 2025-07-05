#include <cassert>
#include "../../src/search/SearchEngine.hpp"
#include "../../src/notes/TextNote.hpp"

void test_search() {
    SearchEngine se;
    std::vector<std::shared_ptr<Note>> notes;
    notes.push_back(std::make_shared<TextNote>("findme", 0, 0));
    auto found = se.search(notes, "findme");
    assert(!found.empty());
}

int main() {
    test_search();
    return 0;
}
