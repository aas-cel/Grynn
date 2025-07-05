#include "SearchIndex.hpp"
#include "../notes/TextNote.hpp"

void SearchIndex::index(const std::vector<std::shared_ptr<Note>>& notes) {
    indexMap.clear();
    for (const auto& note : notes) {
        if (note->getType() == "TextNote") {
            auto text = static_cast<const TextNote*>(note.get())->getText();
            indexMap[text].push_back(note);
        }
    }
}

std::vector<std::shared_ptr<Note>> SearchIndex::query(const std::string& term) const {
    auto it = indexMap.find(term);
    if (it != indexMap.end()) return it->second;
    return {};
}
