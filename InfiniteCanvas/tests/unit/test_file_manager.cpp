#include <cassert>
#include "../../src/file/FileManager.hpp"
#include "../../src/notes/TextNote.hpp"

void test_save_load() {
    FileManager fm;
    std::vector<std::shared_ptr<Note>> notes;
    notes.push_back(std::make_shared<TextNote>("A", 1, 2));
    fm.saveProject("test.cnotes", notes);
    std::vector<std::shared_ptr<Note>> loaded;
    fm.loadProject("test.cnotes", loaded);
    assert(!loaded.empty());
    assert(static_cast<TextNote*>(loaded[0].get())->getText() == "A");
}

int main() {
    test_save_load();
    return 0;
}
