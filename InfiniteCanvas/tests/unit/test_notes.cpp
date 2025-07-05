#include <cassert>
#include "../../src/notes/TextNote.hpp"

void test_text_note() {
    TextNote note("Hello", 1, 2);
    assert(note.getText() == "Hello");
    note.setText("World");
    assert(note.getText() == "World");
}

int main() {
    test_text_note();
    return 0;
}
