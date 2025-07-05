#include <cassert>
#include "../../src/file/ProjectSerializer.hpp"
#include "../../src/notes/TextNote.hpp"

void test_serialize() {
    std::vector<std::shared_ptr<Note>> notes;
    notes.push_back(std::make_shared<TextNote>("S", 1, 2));
    ProjectSerializer::serialize("test2.cnotes", notes);
    std::vector<std::shared_ptr<Note>> loaded;
    ProjectSerializer::deserialize("test2.cnotes", loaded);
    assert(!loaded.empty());
    assert(static_cast<TextNote*>(loaded[0].get())->getText() == "S");
}

int main() {
    test_serialize();
    return 0;
}
